# For doxygen config, refer to https://p5r.uk/blog/2014/cmake-doxygen.html
# and https://gitlab.mn.tu-dresden.de/spraetor/dune-dec.git
# For doxygen comment style, refer to https://www.cs.cmu.edu/~410/doc/doxygen.html
find_package(Doxygen)
option(BUILD_DOCUMENTATION
       "Create and install the HTML based API documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
    if(NOT DOXYGEN_FOUND)
        message(FATAL_ERROR "Doxygen is needed to build the documentation.")
    endif()

    # Doxygen Input
    set(doxy_main_page ${CMAKE_SOURCE_DIR}/README.md)
    set(doxyfile_in ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(doxyfile ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    configure_file(${doxyfile_in} ${doxyfile} @ONLY)

    # Doxygen Output
    set(DOXYGEN_OUTPUT_DIR ${CMAKE_BINARY_DIR}/doxygen)
    file(MAKE_DIRECTORY ${DOXYGEN_OUTPUT_DIR})
    set(DOXYGEN_INDEX_FILE ${DOXYGEN_OUTPUT_DIR}/html/index.html)

    add_custom_target(doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile}
        WORKING_DIRECTORY ${DOXYGEN_OUTPUT_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM)

endif(BUILD_DOCUMENTATION)
