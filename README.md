# x86-to-C interface programming project
This is the repository for the x86-to-C interface programming project of S12 LBYARCH MP Group 3.

## Table of Contents
- [Introduction](#introduction)
- [Specification](#specification)
- [Compiling and Running the Program](#Compiling-and-Running-the-Program)
- [Program Output with the Correctness Check](#Program-Output-with-the-Correctness-Check)
- [Execution Time](#execution-time)
- [Analysis](#analysis)
  
## Introduction
This repository contains a program that converts grayscale image pixel values from an integer (uint8) format to a float format (double precision) using both C and x86-64 assembly. The C program managed input reading, allocating memory, timing, and printing the output values. Meanwhile, the actual conversion operation was done by calling an assembly function which used scalar SIMD registers and scalar SIMD instructions. For comparison purposes, a C function with the very same functionality as the assembly program was also added. The average execution times for both the assembly and the C function were timed and calculated seperately for different matrix sizes (10x10, 100x100, 1000x1000) by running the program 30 times. Finally, a short analysis was also added to compare the performance of the assembly function and the C function in terms of their execution time.

## Specification
Implement a program that converts the grayscale image representation from int based to float based using C and x86 assembly language. Implement the function imgCvtGrayIntToDouble().

*Required to use functional scalar SIMD registers

*Required to use functional scalar SIMD floating-point instructions

#### Input: height, width, integer pixel values
Example:
3 4

64,  89,  114, 84

140, 166, 191, 84

216, 242, 38,  84

#### Output: Double Float pixel values
Example:

0.25 0.35 0.45 0.33

0.55 0.65 0.75 0.33

0.85 0.95 0.15 0.33

## Compiling-and-Running-the-Program
### Note: Please turn on the video audio to hear the discussion
- Source Code

https://github.com/user-attachments/assets/8b9586f7-4fc5-474d-8ed3-d769981e1b0c

- Compiling the program


https://github.com/user-attachments/assets/2abd7c7d-042c-4348-a1a0-ab5bed69b248

- Execution of the program
  ->input: sample input and 10x10


https://github.com/user-attachments/assets/442990cc-4233-4042-bd4a-b726fec6ddb7

 ->input: 100x100 
 

https://github.com/user-attachments/assets/0ac303ed-ebc5-4ccd-a3ef-8a0c557bfe80


 ->input: 1000x1000



https://github.com/user-attachments/assets/978b584f-1691-4185-a4ab-7c328c99f4c2



## Program Output with the Correctness Check
 -> output for the sample input
![f3316492-98cf-4c97-8c44-4b99696b39b7](https://github.com/user-attachments/assets/4a0ead1b-5727-4829-8047-e9bf25448cfe)


 -> output for the 10x10 matrix

![319c0505-8d0c-4a83-9382-3a624ef69dbc](https://github.com/user-attachments/assets/0210ce45-eaf3-44ab-ab6c-19fe54e42245)


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

If we take a look at the conversion of a 10x10 matrix, both Assembly and C took an average of 0 ms. From here, we can deduce that both Assembly and C are able to perform relatively fast on a small dataset and their performance difference is negligible since there is only a minimal computational load. Meanwhile, when the matrix size is increased to 100x100, there is a slight increase in the performance time of C compared to Assembly with the former having an average of 0.033 ms and the latter still 0 ms. This suggests that while both still perform quite efficiently, C takes more time to execute. However, the performance difference becomes more apparent in the 1000*1000 matrix. C had an average time of 1.966666667 ms while Assembly had an average time of 1.866666667 ms. Essentially, Assembly's average time was *faster* by  approximately 5.08% compared to C. If the dataset were even larger, we can infer that C’s execution time would grow considerably than that of Assembly.

A possible explanation as to why Assembly is able to perform faster than C lies with the fact that the registers where the data are stored in Assembly are found inside the CPU and does not need to be fetched from the main memory. Contrastingly, C requires frequent storage and retrieval from the memory. The minimal memory access of Assembly makes it far more efficient compared to performing operations through high-level C code. However, it does not go without saying that Assembly also has it limitations. Assembly requires more detailed management of the registers and memory which can be quite complex when dealing with more complex programs. 

This opens us to the idea of combining and interfacing Assembly with C to achieve a sense of balance between performance and control. Just like in this program, we can use Assembly for the computationally-intensive tasks while we can use C to handle the remaining parts of the program such as input/ouput operation, error handling and et cetera. This approach will allow programmers to build performance-critical programs without sacrificing manageability.


