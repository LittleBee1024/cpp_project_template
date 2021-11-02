<CENTER>
<h1 align="center">
  <img alt="Logo" src="docs/logo.png" width="200">
</h1>

<p align="center">
  <strong>
  A c++20 project template with 
  <a href="https://conan.io/">canon package manager</a>, 
  <a href="https://google.github.io/googletest/">google test</a> and 
  <a href="https://littlebee1024.github.io/cpp_project_template/">doxygen documentation</a>, to help setup your c++ project easily.
  </strong>
</p>
</CENTER>

[TOC]

# Introduction
C++20 project template with google test and conan package manager

# Requirements
To build/run the project, please make sure following softwares are installed in your machine:
* gcc/g++ (version 11 or above)
* cmake (version 3.21 or above)
* conan (version 1.41 or above)
* doxygen (optional for cpp docs)

# Markdown Syntax

## Block quotes
> This is a block quote
> spanning multiple lines

## Code Blocks
```cpp
int main()
{
  return 0;
}
```

## Code spans
* Function `printf()` code spans

## Emphasis
* *single asterisks*
* _single underscores_
* **double asterisks**
* __double underscores__

## Strikethrough
* ~~double tilde~~

## Code References

### Class Reference
* [animal](@ref DEMO::Animal)

### Function Reference
* [set_weight](@ref DEMO::Animal::set_weight)

### File Reference
* [animal.h](@ref animal.h)

## Links

### Inline Links
* [The link text](./docs/logo.png)

### Automatic Linking
* <http://www.example.com>
* <https://www.example.com>
* <ftp://www.example.com>
* <mailto:address@example.com>
* <address@example.com>

## Images
* ![Caption text](./docs/logo.png)
* ![Caption text](./docs/logo.png "Image title")
* ![Caption text](@ref ./docs/logo.png)

## Tables
First Header  | Second Header
------------- | -------------
Content Cell  | Content Cell
Content Cell  | Content Cell

# Other Documentation
[internal doc](@ref md_docs_internal)
