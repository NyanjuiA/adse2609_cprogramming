/* This program demonstrates the 'if...else' selection construct. It accepts a whole number and determines
    whether it's an odd or even number. */

 // Pre-processor directives
 #include <stdio.h>

 int main()
 {
    // Variable to be used in the program
    unsigned short score;

    // Prompt and read in the score from the user
    printf("Please enter you score in the exam:\n");
    scanf("%u",&score);

    // Validate the score
    if (score < 0 || score >100)
    {
       printf("Invalid score entered.\nKindly enter a score between 0 - 100");
       return 1;
    }

//   if (score >= 55)
//      printf("Congratulations, with a score of %u, you passed the exam!!",score);
//   else
//      printf("Unfortunately, with a score of %u, you failed the exam!!",score);
      score >= 55 ?
       printf("Congratulations, with a score of %u, you passed the exam!!",score) :
       printf("Unfortunately, with a score of %u, you failed the exam!!",score);


    return 0;
 }
