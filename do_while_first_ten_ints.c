/* This program demonstrates the use of the do...while loop to display the first ten
   integers. */

 // Pre-processor directive
 #include <stdio.h>

 int main()
 {
    // Variable to be used in the program
    int n = 1; // Declaration and initialisation

    // Use the do...while loop to display the first ten integers
    do
    {
        printf("\nCurrent value of n is: %2d.",n);
        n++;
    }while (n <= 10 );


    return 0;
 }
