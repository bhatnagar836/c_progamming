#include<stdio.h>
void call_by_ref(int *a)
{
    *a = 21;
}
int main()
{
    // Call by reference
    int x = 51;
    printf("The value of x is %d\n", x);
    call_by_ref(&x);
    printf("The value of x is %d\n", x);
    return 0;
}