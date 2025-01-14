#include<stdio.h>

/*
    Rules for switch statement:
    1) Switch expression must be either int or char
    2) Case value must be either int or char
    3) Case must come inside switch
    4) Break ("break;") is not a must
*/
int main()
{
    /* Switch statements */
    char color;
    printf("Which primary color is your favourite\nEnter r for red, y for yellow and b for blue\n");
    scanf("%c\n", &color);
    switch (color)
    {
        case 'r':
            printf("Your favourite colour is RED\n");
            // break;
        case 'b':
            printf("Your favourite colour is BLUE\n");
            // break;
        case 'y':
            printf("Your favourite colour is YELLOW\n");
            // break;
        default:
            printf("Colour entered is not primary");
    }
    return 0;
}

