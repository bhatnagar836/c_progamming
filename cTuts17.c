#include<stdio.h>
// goto or jump statement - transfers control to a pre defined label
// it is preferred when we need to break multiple loops using a single statement 

int main()
{   
    // label1:
    //     printf("Hello Pooja\n");
    //     goto end;
    // printf("Not printed as skipped");
    // goto label1;
    // end: 
    //     printf("We are at end of the script");
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter 0 to quit or some other number to play\n");
            scanf("%d", &num);
            if (num == 0)   
            {
                goto end;
            }
            
        }
        
    }
    end:
        return 0;
}