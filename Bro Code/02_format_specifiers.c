# include <stdio.h>

int main() {

    // Format Specifier = Special token that begins with the % symbol
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    int age = 35;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Big Nuts";

    printf("%d\n", age); // %d = decimal
    printf("%f\n", price); // %f = float
    printf("%lf\n", pi); // %lf = long float (double)
    // printf("%f\n", pi); // CAN use %f for double BUT just a good habit to do lf for double (better for later on)
    printf("%c\n", currency); // %c = char
    printf("%s\n", name); // %s = array of characters (string)
    printf("\n");

// WIDTH

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1); // The number typed between % and d will determine the width
    printf("%d\n", num2); // Width specifies the minimum number of characters to print
    printf("%d\n", num3);

    printf("%3d\n", num1); // Now it's printing 3 characters for all of them
    printf("%3d\n", num2); // Positive width pads spaces in front of shorter ones
    printf("%3d\n", num3); // 100 is already 3 characters, so nothing happens

    printf("%5d\n", num1); // Now it's printing at least 5 spaces
    printf("%5d\n", num2);
    printf("%5d\n", num3);

    printf("%-4d\n", num1); // By using negative widths, you can justify (align) numbers
    printf("%-4d\n", num2); // Pads the spaces at the end of shorter ones
    printf("%-4d\n", num3);

    printf("%04d\n", num1); // By adding a 0 before, you can pad 0's before
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    printf("\n");

    // Maybe a number is negative
    int num4 = -100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num4);

    printf("%+d\n", num1); // By adding +, if the number is positive then +, if negative then -
    printf("%+d\n", num2); // May be good for accounting
    printf("%+d\n", num4);
    printf("\n");

// PRECISION

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n", price1); // By default, it prints 6 digits after the decimal point
    printf("%f\n", price2);
    printf("%f\n", price3);

    printf("%.2f\n", price1); // By adding .x, you can display x digits after the decimal
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    printf("%.1f\n", price1); // By doing .1, it rounds the numbers
    printf("%.1f\n", price2);
    printf("%.1f\n", price3);
    printf("\n");

// Can do all 3

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}

/*
Summary:
    * %[flags][width][.precision][length]specifier
    * flags:
        * (-) = "left-justify" the output, pad spaces on the right
        * (+) = always prefix a signed number with + or -
        * (space) = prefix a space to a positive signed numeric conversation, lines up the positive and negative
            * e.g. $ -5 and $  5 --> they're lined up
        * (0) = for numeric conversions, pad with leading zeros instead of spaces, ignored if (-) present
        * (#) = converted to an "alternative form"
            * For g and G types, trailing zeros are not removed.
            * For f, F, e, E, g, G types, the output always contains a decimal point.
            * For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers.
                * Ain't nobody normal using ts XD
*/
