# include <stdio.h>

// Scanning/Reading user string input is tricky too.

// In Python you could simply just
// name = str(input("What is your name?\n"))
// print("Your name is",name)

// In C we hold more responsability on how the user input is stored.
// Python has string grow automatically in respect to how long the user input is.
// C has you directly designate a specific amount of space for a string.

int main (void){
    // Example!
    char animal[8]; // We have an array of characters in other words a list of characters.
    // The [8] signifies that the array can hold 8 characters!
    
    // But arrays in C work in a funky way.
    // [ [][][][][][][][] ] We can think of this as an an array with 8 characters.
    // [ [][][][][][][][\0] ] The last spot is reserved for something though...
    // The "\0" needs to be accounted for because it is like a period point.
    // It marks the ending of a string so make sure to leave space for it.

    // Let's say we want to store the string: "elephant"

    //char fav_animal[8];
    //fscanf(stdin, "%7s",&fav_animal); We do the known scan method for strings
                                     // %7s signifying we want only 7 letters of input.
                                     // Will this be enough for our word??
    //printf("Your favorite animal is: %s\n",fav_animal);
    // It's not! Our word gets cut off to just be "Elephan"

    // How do we fix it? Increase the array size and the amount of letters we take!
    char fav_animal2[9];
    printf("What is your favorite animal?\n");
    fscanf(stdin," %8s",&fav_animal2);
    printf("Your favorite animal is: %s\n",fav_animal2);

    return 0;

}