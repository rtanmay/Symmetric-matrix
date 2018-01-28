# Symmetric-matrix
This repository contains:-

1)A C++ program that inputs a *N x N symmetric matrix* and **stores only the upper or lower triangular elements to optimize the computer storage** and performs the operations mentioned below and also output the space saved.

2)A C++ program that finds the space saved by the storing only(it inputs the order of matrix and size of each element and outputs the space saved)

The following operations are done on the matrix to check the efficiency of the program.

    1)Changing elements of only one triangle(upper or lower)

    2)Addition/subtraction(inputting two matrices in which atleast one is symmetric)
  
    3)Multiplication((inputting two matrices in which atleast one is symmetric)
  
*The program also outputs the space saved(as compared to when the whole matrix is stored instead of just upper or lower triangular elements)*

The value of **N can range from 0 to 18,446,744,073,709,551,615**(unsigned long long ), so the total elements the matrix can contain are: **> 10 to power 38**

Since we store only half of the matrix(upper or lower triangle) we save space of(n power 2 -n ) elements.
If each element is of 8bytes and value of N is (10 power 9)then space saved is: 8jjy8 bytes ~ 6GB

It is evident that storage optimization becomes more important when we have very large number of data elements and of higher size.

    **RESULTS**
    
    to be written after completion of program
