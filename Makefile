# Pre-install
# gcc/g++ (version 11 or above)
# cmake (version 3.21 or above)
# conan (version 1.41 or above)

all: help

help:
	@echo "targets:"
	@echo "\tclean   - clean the project"
	@echo "\tdep     - install dependencies with conan"
	@echo "\tbuild   - build the project incrementally, please 'make dep' at first"
	@echo "\trun     - run unit tests"
	@echo "\trelease - build release version"
	@echo "\tdebug   - build debug version"

.PHONY: clean dep release debug build run

clean:
	@rm -rf ./build

dep: clean
	@mkdir "build"
	@cd build && conan install .. --build=missing

build:
	cmake -S . -B build
	cmake --build ./build --verbose

release: dep
	@cmake -S . -B build -DCMAKE_BUILD_TYPE=RELEASE
	cmake --build ./build --clean-first --verbose

debug: dep
	@cmake -S . -B build -DCMAKE_BUILD_TYPE=DEBUG
	cmake --build ./build --clean-first --verbose

run:
	@./build/bin/unit_tests
