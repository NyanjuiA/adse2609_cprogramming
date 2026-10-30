/* This program demonstrates the various comparison and logical operators in C, to compare
    two integers and display the result.

    NB: The ternary operator ( ? : ) will be used to convert 0 -> false and 1 -> true */

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
     printf("\n%d equal to (==) %d ? %s", firstNum, secondNum, (firstNum == secondNum) == 1? "true": "false");
     // Not equal to '!=' operator
     printf("\n%d not equal to (!=) %d ? %s", firstNum, secondNum, (firstNum != secondNum) == 1? "true": "false");
     // Greater than '>' operator
     printf("\n%d greater than (>) %d ? %s", firstNum, secondNum, (firstNum > secondNum) == 1? "true": "false");
     // Greater than or equal to '>=' operator
     printf("\n%d greater than or equal to (>=) %d ? %s", firstNum, secondNum, (firstNum >= secondNum) == 1? "true": "false");
     // Less than '>' operator
     printf("\n%d less than (<) %d ? %s", firstNum, secondNum, (firstNum < secondNum) == 1? "true": "false");
     // Less than or equal to '<=' operator
     printf("\n%d less than or equal to (<=) %d ? %s", firstNum, secondNum, (firstNum <= secondNum) == 1? "true": "false");

     printf("\n==========================================");

     // Demonstrate the various logical operators
     printf("\n LOGICAL OPERATORS");
     printf("\n==========================================");
     // Logical AND : Evaluates to true when both expressions are true.
     printf("\nLOGICAL AND (&&)");
     printf("\n(%d > %d) && (%d > 0) is %s", firstNum, secondNum, firstNum,
       ((firstNum > secondNum) && (firstNum > 0) ) == 1? "true": "false");

     // Logical OR : Evaluates to true when at least one expression is true.
     printf("\nLOGICAL OR (||)");
     printf("\n(%d < %d) || (%d < 0) is %s", firstNum, secondNum, firstNum,
       ((firstNum < secondNum) || (firstNum < 0)) == 1? "true": "false");

     // Logical NOT : reverses truth value of expression (true > false and false > true).
     printf("\nLOGICAL NOT (!)");
     printf("\n(%d < %d) is %s  \n!(%d < %d) is %s ", firstNum, secondNum, ((firstNum < secondNum)) == 1? "true": "false",
            firstNum, secondNum,    ( !(firstNum < secondNum)) == 1? "true": "false");
     printf("\n==========================================");

    // NB: ternary operator is the short-hand form for an if...else construct.

    return 0;
 }
