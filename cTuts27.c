#include<stdio.h>
int main()
{
    int a = 34;
    char b ='3';
    int* ptra = &a;
    char* ptrb = &b;
    int arr[]= {1,4,5,7,9,11};
    // printf("Address of a is %d\n", ptra);
    // ptra++;
    // printf("Address of next element after a is %d\n", ptra);
    // printf("Address of next element after ptra++ is %d\n", ptra+1);
    // printf("Address of b is %d\n", ptrb);
    // printf("Address of next element after b is %d\n", ptrb+1);
    // printf("Address of previous element before b is %d\n", ptrb-1);
    printf("The value at position 3 is %d\n", arr[3]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);
    // arr++ This line will throw an error
    printf("The address of the first element of the array is %d\n", *(&arr[0]));
    printf("The address of the first element of the array is %d\n", *(arr));
    printf("The address of the second element of the array is %d\n", *(&arr[1]));
    printf("The address of the second element of the array is %d\n", *(arr + 1));



    return 0;
}
