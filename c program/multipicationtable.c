#include <stdio.h>

int main()
{
    int n;
    printf("enter the no for multiplication =  ");
    scanf("%d", &n);

    printf("the multiplication table  %d is ", n);
    //printf("%d X 1=%d \n", n, n * 1); // one way without loop;
    for (int i = 0;i < 11; i++)
    {
        printf("%d X %d =%d \n ", n, i, n*i);
    }

    return 0;
}