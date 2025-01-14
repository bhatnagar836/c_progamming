#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
        {
            return 1; 
        }
    else
        {
           return (num * factorial(num -1));
        }
}
int main()
{   
    int n;
    printf("Enter number you want factorial of\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n,factorial(n));
    return 0;
}
