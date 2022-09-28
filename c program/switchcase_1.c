#include <stdio.h>
int main()
{
    int age;
    printf("ENTER THE AGE");
    scanf("%d",&age);
    switch(age)
    {
        case 13:
        printf("you can't vote");
        case 15:
        printf("you can't vote");
        break;
        case 19:
        printf("you can vote");
        break;
        default :
        printf("pls enter the age between 13,15,19");
    }
return 0;
}