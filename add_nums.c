// C program that accepts two numbers, sums them and displays their sum

// Pre-processor directive
#include <stdio.h>

// main function provides the entry point to the program/application
int main()
{
   // Variables to be used in the program
    int num1, num2, sum;

    // Prompt the user for the variables to be added
    printf("Please enter the value of the first number to be added:\n");
    // Read in the value of the first number
    scanf("%d",&num1);

    printf("Please enter the value of  the second number to be added:\n");
    // Read in the value of the second number
    scanf("%d",&num2);

    // Add the two numbers and assign the result to sum
    sum = num1 + num2;

    printf("\n%d + %d = %d\n",num1, num2, sum);

   return 0;
}
