#include <stdio.h>
#include <stdbool.h>
/*
    kms to miles
    inches to foot
    cms to inches
    pound to kgs
    inches to meters
*/
int main()
{
    float kms, miles, inches, foot, cms, pound, kgs, meters;
    char answer;
    printf("Hey welcome to conversion tool\n");
    while (1)
    {
        printf("Press 1 for kms to miles conversion\n Press 2 for inches to foot conversion\n Press 3 for cms to inches conversion\n Press 4 for pound to kgs conversion\n Press 5 for inches to meters conversion and 'q' to quit the game\n   ");
        scanf(" %c", &answer);
        switch (answer)
        {
        case 'q':
            printf("You chose to quit. Okay bye!");
            goto end;

         case '1':
            printf("Enter how many kms:\n");
            scanf("%f", &kms);
            miles = kms * 0.621371;
            printf("%d kms = %.5f  miles\n", (int)kms, miles);
            break;
        case '2':
            printf("Enter how many inches:\n");
            scanf("%f", &inches);
            foot = inches * 0.0833333;
            printf("%d inches = %.5f foot\n", (int)inches, foot);
            break;
        case '3':
            printf("Enter how many cms:\n");
            scanf("%f", &cms);
            inches = cms * 0.39370;
            printf("%d cms = %.5f  inches\n", (int)cms, inches);
            break;
        case '4':
            printf("Enter how many pound:\n");
            scanf("%f", &pound);
            kgs = pound * 0.453592;
            printf("%d pound = %.5f  kgs\n", (int)pound, kgs);
            break;
        case '5':
            printf("Enter how many inches:\n");
            scanf("%f", &inches);
            meters = inches * 0.0254;
            printf("%d inches = %.5f  meters\n", (int)inches, meters);
            break;
        
        }
    }
    
    end:
    return 0;
}
