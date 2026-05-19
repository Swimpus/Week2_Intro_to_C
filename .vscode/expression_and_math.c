# include <stdio.h>

int main(void){

    // Statemens & Expressions

    // Statement
    // Declarational in nature. Often states something.
    // "Performs something"
    int p = 5;
    char let = '!';

    // Expression
    // Computes something. Or expresses something.
    // "Produces a value"

    int expression = 1 + 5;
    int a = 25;
    int b = 4;
    int expression_2 = a * b;
    // a > b is also an expression

    // Arithmetic Operators
    // Addition(+), 3+4 =7
    // Subtraction(-), 10-2=8
    // Multiplication (*), 2*5 = 10
    // Divsion (/), 6/2 = 3
    // Modulus(%) stands for remainder
    // 7%2 = 1. What is the remainder of 7 divided by 2? == 1

    // Order of Operations
    // Similar to Python, follows Pemdas
    // Order from highest to lowest priority.
    // () Grouping/Function Call
    // *, / , % Multiplication and Division
    // +, - Adding and subtracting
    // = Assignment (done last)

    // Arithmatic Example
    int result_1 = 4 + 2 * 3; // 4+2*3 = 4 + 6 = 10
    printf("Result One: %d\n",result_1);
    int result_2 = (4+2) *3; // (4+2)*3 = 6 *3 = 18
    printf("Result Two: %d\n",result_2);

    //--------------------------------------------------------------------------
    // Compound Assignment and Increment
    // Recall the shortcut used in python.
    // x += 2 <==> x= x+2

    // We use the same logic here in C.

    int start_num = 25;

    // KEEP IN MIND THAT THE VALUE GETS UPDATED!!
    start_num += 5; // Adding 5 to whatever start_num already was.
    printf("Your number's current value:%d\n",start_num);
    start_num -= 10; // Subtracting 10 from start_num already was.
    printf("Your number's current value:%d\n",start_num);
    start_num *= 2; // Multiplying 2 to start_num.
    printf("Your number's current value:%d\n",start_num);
    start_num /= 4; // Dividing start_num by 4.
    printf("Your number's current value:%d\n",start_num);
    start_num %= 3; // Dividing start_num by 3 and obtaining the remainder.
    printf("Your number's current value:%d\n",start_num);

    // New Terms!!
    // Increment

    // Post-Increment
    // x++; Use x first, then update it
    int x = 5 ;
    int y = x++;
    // What will x and y be?
    // x gets updated by y having the x++ (post-increment command)
    // But y is still simply just what x was originally (5).
    // This is due to x being used first and then being updated for later uses.
    printf("Post_Increment,x:%d,y:%d\n",x,y);
    // x: 6, y:5


    // Pre-Increment
    // ++x; Update x first, then use it
    int d = 5;
    int v = ++d; // Increment then update too!
    printf("Pre_Increment,d:%d,v:%d\n",d,v);
    // d:6, v:6

    // THEY BOTH DO THE SAME ACTION OF
    // x+= 1 or x = x+1.

    // Post-increment (x++)
    //→ use the current value first, then increment
    //Pre-increment (++x)
    //→ increment first, then use the new value


    return 0;
}