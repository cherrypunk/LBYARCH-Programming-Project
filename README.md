# x86-to-C interface programming project
This is the repository for the x86-to-C interface programming project of S12 LBYARCH MP Group 3.

## Table of Contents
- [Introduction](#introduction)
- [Execution Time](#execution-time)
- [Analysis](#analysis)
- [Conclusion](#conclusion)
  
## Introduction
This repository contains a program that converts grayscale image pixel values from an integer (uint8) format to a float format (double precision) using both C and x86-64 assembly. The C program managed input reading, allocating memory, timing, and printing the output values. Meanwhile, the actual conversion operation was done by calling an assembly function which used scalar SIMD registers and scalar SIMD instructions. For comparison purposes, a C function with the very same functionality as the assembly program was also added. The average execution times for both the assembly and the C function were timed and calculated seperately for different matrix sizes (10x10, 100x100, 1000x1000) by running the program 30 times. Finally, a short analysis was also added to compare the performance of the assembly function and the C function in terms of their execution time.

## Execution Time
Table 1. Execution Time (in milliseconds) Across Different Matrix Sizes (10x10, 100x100, 1000x1000)
| Run | C (10x10) ms | x86-64 (10x10) ms | C (100x100) ms | x86-64 (100x100) ms | C (1000x1000) ms | x86-64 (1000x1000) ms |
|-----|--------------|-------------------|----------------|---------------------|------------------|-----------------------|
| 1   | 0            | 0                 | 0              | 0                   | 2                | 3                     |
| 2   | 0            | 0                 | 0              | 0                   | 2                | 3                     |
| 3   | 0            | 0                 | 1              | 0                   | 1                | 2                     |
| 4   | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 5   | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 6   | 0            | 0                 | 0              | 0                   | 3                | 3                     |
| 7   | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 8   | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 9   | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 10  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 11  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 12  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 13  | 0            | 0                 | 0              | 0                   | 1                | 2                     |
| 14  | 0            | 0                 | 0              | 0                   | 3                | 2                     |
| 15  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 16  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 17  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 18  | 0            | 0                 | 0              | 0                   | 2                | 3                     |
| 19  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 20  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 21  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 22  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 23  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 24  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 25  | 0            | 0                 | 0              | 0                   | 1                | 1                     |
| 26  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 27  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 28  | 0            | 0                 | 0              | 0                   | 2                | 1                     |
| 29  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| 30  | 0            | 0                 | 0              | 0                   | 2                | 2                     |
| Avg | 0            | 0                 | 0.0333         | 0                   | 1.967            | 1.867                 |



## Analysis


## Conclusion

