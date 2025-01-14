#include <stdio.h>

int fib_rec(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }

}


int fib_iter(int n)
{
    int first = 0, second = 1, third;
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {

            second = first + second;
            first = second - first;
        }
    return first;
    }
}
int main()
{ 
    int num, fib_r, fib_i;
    printf("Enter a number to find fibonacci of:\n");
    scanf("%d", &num);
    fib_i = fib_iter(num);
    printf("Answer of fib_iterative = %d\n", fib_i);
    fib_r= fib_rec(num);
    printf("Answer of fib_recursive = %d\n", fib_r);

    
}

