#include <stdio.h>

int main(void){

    // C is a little more picky than Python
    // It often wants you to specify the size of integers
    // And whether they are signed or unsigned.

    // What does signed vs unsigned mean.

    // By default integers are signed
    int numb = 6;
    int numb2 = -5;
    // Meaning they include both negative and positive numbers.
    // This is good! Since maybe you might need negative numbers!

    // But what if you wanted positive numbers only?
    // You have to specify that an integer is unsigned
    unsigned numb3 = 0; // There is a specific consequence to using this command though...

    // That being that the range of possible POSITIVE numbers doubles
    // You can go from 0 to 4,294,967,295 (unsigned)
    // For signed you could go from -2,000,000,000 to 2,000,000,000 (signed).

    // So use whichever you may need based on the situation.


    // ------------------------------------------------------------------------------------------
    // Now for Type Modifiers
    // Control how much memory and integer uses.

    // short
    short int sh_numb = 76; // Forces a smaller range of numbers, but gives the benefit of taking less memory.

    printf("Number:%d,Size:%zu bytes\n",sh_numb,sizeof(sh_numb));
    // Typically integers take up about 4 bytes, if you use short it only takes 2 bytes!

    // long
    long int big_numb = 1000000L; // Mind the L, it helps the compiler know that it's a long.
    printf("Number:%d,Size:%zu bytes\n",big_numb,sizeof(big_numb));
    // Useful for bigger numbers at the cost of more memory!
    // long typically takes up to 8 bytes as opposed to the 4 typical ones.

    // long long
    long long int bigger_numb = 9000000000LL; // Mind the LL, helps signify that it is a long long.
    printf("Number:%d,Size:%zu bytes\n",bigger_numb,sizeof(bigger_numb));
    // Useful for longer numbers!!
    // long long takes up 8 bytes.



    return 0;
}