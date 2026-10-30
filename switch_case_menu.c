/* This program demonstrates the switch...case construct to display a restaurant menu.  */

 // Pre-processor directive
 #include <stdio.h>

 int main()
 {
    // Variable(s) to be used in the program
    int choice ; // holds the customer's choice

    // Display the restaurant menu
    printf("\n==========================================");
     printf("\nWELCOME TO THE ADSE2605 RESTAURANT");
     printf("\n==========================================");
     printf("\n1. Chips                            - Kes. 150");
     printf("\n2. Beef Burger                  - Kes. 350");
     printf("\n3. Chicken and Rice          - Kes. 400");
     printf("\n4. Vegetable Salad            - Kes. 200");
     printf("\n5. Fresh Juice                     - Kes. 100");
     printf("\n==========================================");

     // Prompt the user to select a food item
     printf("\nPlease enter the meal/drink of your choice (1 - 5): \n");
     scanf("%d", &choice);

     // Use the switch case to determine the selected item.
     // Each case represents one item on the restaurant menu
     switch (choice)
     {
     case 1:
         printf("You selected chips. Price: Kes. 150\nYour meal will be served shortly.");
         break;
      case 2:
         printf("You selected Beef Burger. Price: Kes. 350\nYour meal will be served shortly.");
         break;
      case 3:
         printf("You selected chicken and rice. Price: Kes. 400\nYour meal will be served shortly.");
         break;
      case 4:
         printf("You selected vegetable salad. Price: Kes. 200\nYour salad will be served shortly.");
         break;
      case 5:
         printf("You selected fresh juice. Price: Kes. 100\nYour drink will be served shortly.");
         break;
      default: // Handle choices less than 1 or greater than 5
         printf("Invalid Choice.\nPlease enter values between 1 - 5.\n");
         break;
     }

    return 0;
 }
