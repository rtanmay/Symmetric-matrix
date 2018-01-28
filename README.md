# Symmetric-matrix
This repository contains:-

1)A C++ program that inputs a *N x N symmetric matrix* and **stores only the upper or lower triangular elements to optimize the computer storage** and performs the operations mentioned below and also outputs the space saved.

2)A C++ program that finds the space saved *(as compared to when the whole matrix is stored instead of just upper or lower triangular elements)* it inputs the order of matrix and size of each element and outputs the space saved.

The following operations are done on the matrix to check the efficiency of the program.

    1)Changing elements of only one triangle(upper or lower)

    2)Addition/subtraction(inputting two matrices in which atleast one is symmetric)
  
    3)Multiplication((inputting two matrices in which atleast one is symmetric)
  

Standard streams are used for Input and Output(Keyboard-Input and Monitor-Output)

The value of **N can range from 0 to 18,446,744,073,709,551,615**(unsigned long long ), so the total elements the matrix can contain are: **> 10^38**

Since we store only half of the matrix(upper or lower triangle) we save space of (n^2 - n )/2 elements.
If each element is of 8bytes and value of N is (2 * 10^9)then **space saved is: ~ 8 * 2 * 10^18 bytes ~ 1.6* 10^7 TB(Terra Bytes) **

Note:- 1TB=10^12 Bytes.

It is evident that storage optimization becomes more important when we have very large number of data elements and of higher size.

    **RESULTS**
    
    to be written after completion of program
