# include <stdio.h>

int main(void){

// THE FOR LOOP!
// Python:
// for i in range(5): [0-4]
//    print("Hi")
// Would print "Hi" 5 times.
// Best for loops with known iteration count!

// C:
// for (initialization;condition;update){
// *BODY*
//  }

// Example 1

    int i;

    for (int i = 0;i<5;i++){ //We use i++ because it uses the current value of i and then adds 1 to it.
        printf("This is iteration:%d\n",i); // It doesen't matter what you use actually. As long as it fits what you do
        printf("Hi\n");
    }

    // Runs 5 times technically (counting the 0)
    // After the body is done running, the update expression is done.

    //-------------------------------------------------------------------------------------------------------
    // While Loops
    // while (condition){
    // *BODY*
    // }

    // Example 2
    int n = 1;
    while(n<=10){
        printf("n is: %d\n", n);
        if (n==10){
            printf("This is the last iteration.\n");
        }
        n++;
    }
    // Runs (1-10) times.
    // 10 is the last iteration

    //---------------------------------------------------------------------------------------------------------------
    // DO WHILE LOOP!
    // do {
    // *BODY
    //} while (condition);

    int choice;

    do{
        printf("Enter a number 1-10\n");
        fscanf(stdin,"%d",&choice);
    } while (choice >= 1 && choice <=10); // While the choice input is between 1 and 10.

    printf("You exited the loop!\n"); // Prints once you exit

    //-------------------------------------------------------------------------
    // Break and Continues
    // Break exits the innermost loop.
    // Continue skips the rest of the current itteration.
    
    // Example for breaks and continues.
    for (int z = 0; z<20;z++){
        if (z % 2 == 0) continue; // Skips the body below but still does the increment!
        if (z == 15) break; // Breaks of the entire loop.
        printf("|%d|",z);
    }
    // As you can see, outputs numbers from 0 to 20.
    // However if the number is even (z%2==0), we skip the printf statement below.
    // Once we reach 15, the whole loop ends because of the break statement.

    return 0;

}