#include<stdio.h>
// Break - use to bring the program cotrol out of that current loop(used inside loops and switch)
// Continue - use to bringthe program control to the next iteration(skips some code also) of the loop, mainly use to skip code for a particular condition

int main()
{   int i, age;

for ( i = 1; i <= 5; i++)         
{    
    printf("%d\nEnter your age\n", i);
    scanf("%d", &age);
//Using break
//     if (age>18)
//     {
//         break;
//     }

//Using continue
    if (age>18)
    {
        continue;
    }
    printf("We have not come across the continue statement");
    
}
    return 0;
}