#include <stdio.h>

int main()
{
    char input;
    int quantity;
    float kmsTomiles = 0.62137;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesToMeters = 0.0254;

    printf("enter the quantity  ");
    scanf("%d", &quantity);
    while (1)
    {
        printf("enter the input character.  q to quite \n 1. kms To miles \n\n 2. inches To foot \n 3. ncms To inches\n 4. poundTokgs\\n 5. inches To Meters\n\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("quitting the program");
            goto end;
            break;

        case '1':
            printf("%f kms To miles %f is =", kmsTomiles);
            break;
        case '2':
            printf("%f inches To foot =", inchesTofoot);
            break;
        case '3':
            printf("%f cms To inches %f is =", cmsToinches);
            break;
        case '4':
            printf("%f pound To kgs %f is =", poundTokgs);
            break;
        case '5':
            printf("%f inches To Meters  %f is =", kmsTomiles);
            break;
        }
    }
end:
    return 0;
}