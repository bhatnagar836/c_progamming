#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int subject;
    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // printf("You entered %d as your age\n", age);
    // if (age>=18)
    // {
    //     printf("You can vote!");
    // }
    // else if (age>12)       
    // {
    //     printf("You are just a teenager!");
    // }
    // else
    // {
    //     printf("Wait for some time!");
    // }
    printf("Enter a number for the subjects you have passed\n 1 for science\n 2 for maths\n 3 for both\n");
    scanf("%d", &subject);

    if (subject==1)
    {
        printf("15");
    }
    else if (subject==2)
    {
        printf("20");
    }
    else if (subject==3)
    {
        printf("45");
    }
    
    else
    {
        printf("Wrong input");
    } 

    return 0;
}