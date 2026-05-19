# include <stdio.h>


int main (void){
    // Format Specifiers!
    // They label types and are what allow the placeholder method to work.

    int age = 43;
    char fav = '$';
    float money = 25.10;
    double points = 211.33772672;
    // Note how they all declare their type on the left side!

    // To print...
    // Use specific format specifiers!
    printf("Your age is: %d\n",age); // Integer is %d
    printf("Your favorite character is: %c\n",fav); // Char is %c
    printf("You have %f dollars \n",money); // Float is %f
    printf("Your current point count: %lf\n",points); // Double is %lf, meaning its just a longer float!

    // For rounding! Think Python rules.
    // %.2d for 2 decimal places
    // .(number) denotes to how many decimal places.
    printf("Rounded money: %.2f\n",money);
    printf("Rounded points: %.5lf\n",points);

    // Size of operator
    // sizeof(variable_name) is the actual command
    // Use it alongside format specifier %zu to show the size of the variable (in bytes)

    int num = 87;
    float mon = 5.99;
    double credits = 356.2939;
    char ch = 'm';

    printf("Number:%d, Size:%zu bytes\n",num,sizeof(num)); // Note how you can summon more than one variable!
    printf("Money:%f, Size:%zu bytes\n",mon,sizeof(mon));  // Make sure they are ordered properly.
    printf("Credits:%lf, Size:%zu bytes\n",credits,sizeof(credits)); // The variables you summon should be in the
                                                               // Same order they appear in your print.
    printf("Character:%c, Size:%zu bytes \n",ch,sizeof(ch));

    // Note how char are smaller in size (1 byte)
    // Int and Float are about the same (4 bytes)
    // Doubles are the largest! (8 bytes)
    return 0;
}
