/* This program accepts the base and height of a right angled traingle from the user,
    calculates and displays its area, and perimeter, using in-built functions. */

 // Pre-processor directive
 #include <stdio.h>
 #include <math.h>

 // main function provides the entry point to the program
 int main()
 {
    // Variables to be used in the program
    float base, height, area, perimeter;

    // Prompt the user for the triangle's base
    printf("Please enter the dimension of the triangle's base in cm.\n");
    scanf("%f",&base);

    // Prompt the user for the triangle's height
    printf("Please enter the triangle's height in cm.\n");
    scanf("%f",&height);

    // Declare and calculate the triangle's hypotenuse
    float hypotenuse = sqrt( (pow(height,2) + pow(base,2)) );

    // Calculate the area and perimeter of the right-angled triangle
    area = .5 * base * height;
    perimeter = base + height + hypotenuse;

    // Display the triangle's dimensions
    printf("\nTriangle's Dimensions");
    printf("\n-----------------------------------------------------");
    printf("\n%-13s: %6.2f cm.","Base", base);
    printf("\n%-13s: %6.2f cm.","Height", height);
    printf("\n%-13s: %6.2f cm.","Hypotenuse", hypotenuse);
    printf("\n%-13s: %6.2f cm².","Area", area);
    printf("\n%-13s: %6.2f cm.","Perimeter", perimeter);
    printf("\n-----------------------------------------------------");


    return 0;
 }
