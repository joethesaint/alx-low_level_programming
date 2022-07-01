# 0x0C. C - More malloc, free 

## About

It aims to learn about how to use `malloc`, `calloc`, `realloc` and `exit`functions in **C language**.

## Technologies

* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Files

All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| [0-malloc_checked.c](./0-malloc_checked.c) | Allocates memory using `malloc` |
| [1-string_nconcat.c](./1-string_nconcat.c) | Concatenates two strings |
| [2-calloc.c](./2-calloc.c) | Allocates memory for an array of integers |
| [3-array_range.c](./3-array_range.c) | Creates an array of integers |
| [100-realloc.c](./100-realloc.c) | Reallocates a memory of block using `malloc` and `free` |
| [101-mul.c](./101-mul.c) | Multiplies two positive numbers |

## Tasks :page_with_curl:

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using `malloc`.
    * If `malloc` fails, the function causes normal process termination with a status value
    of `98`.

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a        newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains `s1` followed by the first `n` bytes
   of `s2`, null-terminated.
    * If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
    * If `NULL` is passed, the function treats the parameter as an empty string.
    * If the function fails - returns `NULL`.
