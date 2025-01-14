// Functions or procedures or subroutine
// Use to divide large c programs into smaller pieces
// provide reusability and modularity
// Declaration (to tell compiler about the existence of the function) , definition(where we write actual implementation of the code) and call(where we use the function)
#include<stdio.h>
// DECLARATION or we can define the sum at the start
// With argument and with return value
int sum(int a, int b); 
// With argument and without return value and defining function at the start only
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
// Without argument with return value
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}

// Without argument without return value
void printdollar()
{   
    for (int i = 0; i < 11; i++)
    {
        printf("%c", '$');
    }
    
}

int main()
{   
    int x, y, c, d;
    // FUNCTION CALL
    // c = sum(x,y);
    // printf("The sum is %d", c);

    // printstar(5);

    // d = takenumber();
    // printf("Number entered by you is %d", d);

    printdollar();
    return 0;
}

// DEFINITION
int sum(int a, int b)
{
    printf("Enter two numbers to be added:\n");
    scanf("%d %d", &a, &b);
    return a+b;
}
