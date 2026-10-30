/* This program demonstrates the use of the for loop to display the first ten
   integers. */

 // Pre-processor directive
 #include <stdio.h>

 int main()
 {
    // Variable to be used in the program
    int n;

    // Use the for loop to display the first ten integers
    for (n = 1; n <= 10; n++)
        printf("\nCurrent value of n is: %2d.",n);

    return 0;
 }
