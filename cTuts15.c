#include<stdio.h> 
/*
    for loop (expr1, expr2, expr3)
    expr1 - initialization(can initialize more than one variable)
    expr2 - conditional expression(loop termination, can have more than one condition - loop will iterate until last condition becomes false, other condition will treated as statements)
    it is optional but then loop might become infinite (use break;)
    can perform initialization as well as increment/decrement
    will treat 0 as false and any non zero as true(causing infinite loop)
    expr3 - used to update loop variable, can update more than one variable at the same time, optional

*/
int main()
{   int i, j, a=0, b=0, c=0, d=0, e=0, f=1;
// initializing 2 variables
for ( i = 0, j = 0; i < 5; i++)         
{
    // printf("%d\t%d\n", i, j);
    j++;
}

// without expr1 (expr1 is optional)
for ( ; a < 5; a++)         
{
    // printf("%d\t%d\n", a, b); 
}

// more than one conditional expr(loop will iterate until last condition becomes false)
for ( ; d = 3, c < 5; c++)  // only c<5 condition will be valid and loop will run for c = 0,1,2,3,4 and d=3 will be treated as a statement       
{
    // printf("%d\t%d\n", c, d); 
    // d++;
}

// expr3 have more than one vairable
for ( ; e < 5; e++, f++)  
{
    // printf("%d\t%d\n", e, f); 
    
}   

// without expr3
for (e=0, f=1 ; e < 5; )  
{
    printf("%d\t%d\n", e, f); 
    e++;
    f++;   
}   
    
    return 0;
}