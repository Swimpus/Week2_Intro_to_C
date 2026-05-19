# include <stdio.h>

int main(void){

    // C expects a certain level of specification as you might have already seen...

    // Integer Division Pittrap
    int a = 7;
    int b = 2;

    int result = a / b; // Performs integer division == 3
                       // Right answer is 3.5 though...
    printf("Result: %d\n",result);

    // The fix?
    // Professor's way.
    double true_result = (double)a/b; // (type)expression
    printf("Result: %.2lf\n",true_result);

    // My way
    float t_result = (float)a/b;
    printf("Mine,Result: %.2f\n",t_result);
    // They both work just be mindful that double is for longer decimals and float is for shorter ones.

    // Interestingly, 
    float c = 7.0f; // The f helps deal with C's funkiness of making everything that is a decimal a double.
    float d = 2.0f; // It helps clarify that it is a literal float!

    float res = c/d;

    printf("Alt way:%.2f\n",res);

    //--------------------------------------------------------------------------------
    // Type Mixing and Implicit Conversion

    int dollars = 7;
    int cents = 2;

    // Be explicit!!

    float price = (float)dollars + cents/100.0f;
    // (float) dollars temporarily turns 7 into a float == 7.0
    // cents/100.0f == 0.02. We need the 100.0f to perform float division!
    // Otherwise we would be doing integer division leading to a mistake
    // 2/100 == 0 (int division)
    // 2/100.0f = 0.02 (float division)

    printf("Price:%.2f\n",price);

    // My attempt
    float price2 = (float)dollars + (float)cents/100;
    printf("Price:%.2f\n",price2);

    // Tip:
    // Simply be mindful of the (type)expression or (type)variable usage!

    // Mixing Types
    // Da Rules: char -> int -> float -> double
    int i = 5;
    float f = 2.0f;

    float r = i + f; // i is promoted to a float before addition.
    // Rule of thumb: the wider type wins in arithmetic.
    // Wider meaning the one holds more specifity.
    printf("r: %f\n",r);

    // Conclusion
    // Initialize every variable when declaring.
    // TELL ME WHAT THEY ARE!!
    int age = 27;
    float gpa = 3.54f; // Again the f helps C know it is a literal float as opposed to a double.
    char grade = 'B';
    double pi = 3.14159265358979;

    return 0;
}