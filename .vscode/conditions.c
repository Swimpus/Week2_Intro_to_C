# include <stdio.h>

// Early versions of C did not have a designated boolean type.
// In python you could just
// condition = True or condition = False

// That is not to say things could not be true or false...

// 0 as a value is considered false (ALWAYS)
// Any other value (including negatives) are considered TRUE!

// Ex 1.

int x = 666;
int faker = 0;
int neg = -22;

// If statements in C:
// if (condition)
int main (void){
    printf("X Positive Number is...\n");
    if (x) printf("TRUE!\n");

    printf("O is considered...\n");
    if (faker) printf("True..\n");
    else
        printf("False..\n");

    printf("A negative number is...\n");
    if (neg) printf("TRUE!\n");

    // Takeaway anything that has a value of 0 is false under C rules.

    // --------------------------------------------------
    // If Statement
    // Template:
    // if (condtition) {
    // (executes when condition is true)
    // }

    // Example 2
    int grade = 75;

    printf("Your grade is %d\n",grade);
    if (grade >= 70) {
        printf("You passed!\n");
    }


    // -------------------------------------------------------------
    // Example 3. Elif and Else plus user input

    int cr_grade;
    printf("Report your grade:\n");
    fscanf(stdin,"%d",&cr_grade);
    printf("Your grade:%d\n",cr_grade);

    if (cr_grade >= 90){ // Greater than or equal to.
        printf("You passed with an A\n");
    }else if (cr_grade >= 80){
        printf("You passed with a B\n");
    }else if (cr_grade >= 70){
        printf("You passed with a C\n");
    }else if (cr_grade >= 60){
        printf("You failed and got a D\n");
    }else{
        printf("You failed and got an F\n");
    }

    return 0;

}