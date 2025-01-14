#include <stdio.h>
// Passing array directly and passing through pointers
// Even if we pass the array directly then not the copy but the actual array has been passed to the function. Thus, changing the value in the function would reflect back in the main program
void func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    array[0] = 382; // change in value gets reflected in the main program
}


void func2(int *arr_ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at arr[%d] is %d\n", i, (arr_ptr[i]));
    }
    *(arr_ptr + 2) = 6543; // changes the value of the element at index[2] and reflect the change in the original array
}


void func3(int array2[2][2])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
        printf("arr2[%d][%d] = %d\n", i, j, array2[i][j]);
    }
  }
}


int main()
{
    int arr[] = {1, 2, 3, 9, 7};
    int arr2[][2] = {{2, 3},{5, 6}};
    // func1(arr);
    // printf("Value at arr[0] has been updated to %d\n", arr[0]);

    // func2(arr);
    // printf("Value at arr[2] has been updated to %d\n", arr[2]);
    // func2(arr);

    func3(arr2);

    return 0;
}