#include <stdio.h> 

// Recall that in python you could do the following
// number = 65
// phrase = "Exploding Hearts"

// BUT IN C!!
// When declaring a file you need to explicitly state what the variable is.

int main(void){
    int my_number = 32; // Declare what your variable type is + its name, then it's contents

    printf("Your number is: %d \n",my_number);

    char my_symbol = '@';

    printf("Your character is: %c \n",my_symbol);


    // For strings:

    // Method One
    // my_line is a pointer that points to a string literal
    char *my_line = "In the name of Justice!!";
    printf("Your string is: %s \n",my_line);

    // Method Two
    // Character array AKA List of Characters
    char my_line2[]= "It's a mechanical bull, the number one!";
    printf("String number two is: %s \n",my_line2);

    return 0;
}

