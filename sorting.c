// Combining two arrays
#include<stdio.h>
int main()
{
    int arr1[] = {1,5,7};
    int arr2[] = {2,4,8,9};
    int arr_combine[20];
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int tot_len = len1 + len2;
    // printf("%d\n", len1);
    // printf("%d\n", len2);

    for (int i = 0; i < len1; i++)
    {
        arr_combine[i]=arr1[i];
    }
    for (int i = len1; i < tot_len; i++)
    {   
        arr_combine[i]=arr2[i];
        printf("arr_combine[%d] = %d",i, arr_combine[i]);
    }
    for (int i = 0; i < tot_len; i++)
    {   
        printf("%d\n",arr_combine[i]);
    }
    
    return 0;
}