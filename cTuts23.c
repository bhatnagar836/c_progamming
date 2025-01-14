#include<stdio.h>
int main()
{   
    // int marks[]={91, 92, 89, 98};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Marks[%d] = %d\n", i, marks[i]);
    // }
    int table[2][5];
    printf("Enter the elements in the 2D array:n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the element at elements[%d][%d]\n", i, j);
            scanf("%d", &table[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
