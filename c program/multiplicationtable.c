#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    printf("the multiplication of %d is =",num);
    for(int i=0; i<num;i++)
    {
       num= num*i;
        printf(num);
    }
    return 0;

}