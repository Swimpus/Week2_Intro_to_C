# include <stdio.h>

int main (void){

    // In python getting input was relatively easy.
    // user_input = input()

    // In C its a little more tricky

    //----------------------------------------------------------
    // Scanf Method and its faults

    int age;
    scanf("%d",&age); // & to link the input to a pre-existing variable that is receiving the user input
    printf("Age:%d\n",age); // age is now whatever the user's input was.

    // Where issues arise!
    char grade;
    scanf(" %c",&grade);
    printf("Grade:%c\n",grade);
    // Note that this skips the user input entirely.
    // This happens because whatever you put from the scan for age...
    // Leaves a newline character that the char eats up causing the user input to be eaten.

    // You need to manually add some whitespace in the scan line.
    // scanf(" %c",&grade); 
    // This eats up the leftover newline!

    //-----------------------------------------------------------------------------------------
    // A fix: fscanf

    // fscanf(stdin) <==> scanf()
    // We are just doing this more explicitly.

    int num_1;
    int initial;
    printf("Enter Number:");
    fscanf(stdin, "%d", &num_1);
    printf("Enter Initial:");
    fscanf(stdin, " %c", &initial); // Note how the %c has space before it, to account for the newline.

    printf("Num:%d ,Initial:%c\n",num_1,initial);

    return 0;
}