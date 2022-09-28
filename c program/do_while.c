#include <stdio.h>
int main()
{
    int a=0,b;
     printf("enter the Number  ");
     scanf("%d", &b);
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= b);

    return 0;
}