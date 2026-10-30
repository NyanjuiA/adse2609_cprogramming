/* This program demonstrates the various comparison and logical operators in C, to compare
    two integers and display the result.

    NB: Comparison operators produce 1 for "true" and 0 for "false". */

 // Pre-processor directive
 #include <stdio.h>

 int main()
 {
    // Variables to be used in the program
    int firstNum = 10, secondNum = 7;

    // Display the values of the above variables
    printf("Values of \'firstNum\' and 'secondNum' are %d and %d respectively.",
           firstNum, secondNum);

     // Demonstrate the various comparison operators
     printf("\nCOMPARISON OPERATORS");
     printf("\n==========================================");

     // Equal to '==' operator
     printf("\n%d equal to (==) %d ? %d", firstNum, secondNum, firstNum == secondNum);
     // Not equal to '!=' operator
     printf("\n%d not equal to (!=) %d ? %d", firstNum, secondNum, firstNum != secondNum);
     // Greater than '>' operator
     printf("\n%d greater than (>) %d ? %d", firstNum, secondNum, firstNum > secondNum);
     // Greater than or equal to '>=' operator
     printf("\n%d greater than or equal to (>=) %d ? %d", firstNum, secondNum, firstNum >= secondNum);
     // Less than '>' operator
     printf("\n%d less than (<) %d ? %d", firstNum, secondNum, firstNum < secondNum);
     // Less than or equal to '<=' operator
     printf("\n%d less than or equal to (<=) %d ? %d", firstNum, secondNum, firstNum <= secondNum);

     printf("\n==========================================");

     // Demonstrate the various logical operators
     printf("\n LOGICAL OPERATORS");
     printf("\n==========================================");
     // Logical AND : Evaluates to true when both expressions are true.
     printf("\nLOGICAL AND (&&)");
     printf("\n(%d > %d) && (%d > 0) = %d", firstNum, secondNum, firstNum,
       (firstNum > secondNum) && (firstNum > 0));

     // Logical OR : Evaluates to true when at least one expression is true.
     printf("\nLOGICAL OR (||)");
     printf("\n(%d < %d) || (%d < 0) = %d", firstNum, secondNum, firstNum,
       (firstNum < secondNum) || (firstNum < 0));

     // Logical NOT : reverses truth value of expression (true > false and false > true).
     printf("\nLOGICAL NOT (!)");
     printf("\n(%d < %d) = %d  \n!(%d < %d) = %d ", firstNum, secondNum, (firstNum < secondNum),
            firstNum, secondNum,     !(firstNum < secondNum));
     printf("\n==========================================");



    return 0;
 }
