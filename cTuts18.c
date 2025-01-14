#include<stdio.h>
// Typecasting syntax : (type) value;
int main()
{   
    int a = 15;
    float b = 55;
    float c = 54/5;
    printf("The value of a is %d\n", a);
    printf("The value of b using int datatype is %d\n", b);
    printf("The value of b using float datatype is %f\n", b);
    printf("The value of b using typecast is %d\n",(int)b);
    printf("The value of c is %f\n",c);
    printf("The value of c using float datatype is %f\n",(float)54/5);

    return 0;
}
