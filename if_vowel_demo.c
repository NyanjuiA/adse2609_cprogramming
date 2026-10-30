/* This program demonstrates the 'if' selection construct. It accepts a letter of the alphabet from the user
    and checks if it's a vowel. */

 // Pre-processor directives
 #include <stdio.h>
 #include <ctype.h>  // includes definition for the 'tolower()' function

 int main()
 {
    // Character array to hold the user's name
    char userLetter;

    // Prompt the user for a letter of the alphabet
    printf("Please enter a letter of the alphabet and I'll tell you whether it's vowel:\n");
   scanf("%c",&userLetter);

   // Convert the user's input to lowercase
   userLetter = tolower(userLetter);

    // Check whether the letter is a vowel
    if( userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u')
      printf("\n%c is a vowel. ", userLetter);

    return 0;
 }
