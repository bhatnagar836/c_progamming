#include<stdio.h>
int main()
{   
    int a = 91;
    int* ptra = &a;
    printf("Lets learn pointers\n");
    printf("The value of a is %d\n", a);
    printf("%d\n", *ptra);
    printf("%p \t %p\n", &a, ptra);
    printf("Address of pointer to a is %d\n", &ptra);

    return 0;
}
