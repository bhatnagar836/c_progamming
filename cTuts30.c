/*
    Take input from user and print triangular or reversed triangular star pattern according to the input
*/

#include <stdio.h>
int main()
{
    int inp, rows;
    printf("Enter 0 for star pattern and 1 for reverse star pattern:\n");
    scanf("%d", &inp);
    if ((inp == 0) || (inp == 1))
    {
        printf("Enter the number of rows you want:\n");
        scanf("%d", &rows);
        switch (inp)
        {
        case 0:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 1:
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= rows - i + 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
    }
    else
    {
        printf("Wrong Input!");
    }
    return 0;
}