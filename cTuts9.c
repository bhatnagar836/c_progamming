#include<stdio.h>
#define PI 3.14 //declaring constants
int main()
{
    int a = 8;
    float b = 7.333;
    // Format specifiers
    printf("%f\n", b);
    printf("this%18.4f\n", b);
    printf("%-18.4fthis\n", b);

    // Constants (which can't be changed)
    const float c = 2.55;
    // c = 34.44; can't do this since c is a constant
    // PI = 3.41; can't do this since PI is a constant
    printf("%f\n", PI);
    
    // Escape sequence 
    printf("My Backslash \\n");
    printf("My Backslash \a");

    // This is a single line comment in C
    /*
    This is a  multiline comment in C
    */
    return 0;
}
