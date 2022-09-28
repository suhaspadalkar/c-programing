#include <stdio.h>
int main()
{
    int age;
    printf("ENTER THE AGE");
    scanf("%d",&age);
    switch(age)
    {
        case (18):
        printf("you can vote");
        case (11):
        printf("you can't vote");
        break;
        case (10):
        printf("you are kid");
        break;
        default :
        printf("pls enter the correct age");
    }
return 0;
}