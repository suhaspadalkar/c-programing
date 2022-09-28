#include <stdio.h>

int main()
{
    int id,bs;
    char nm[10];
    float da,hra,ta,gs,itax,ns;
    printf("enter the salary");
    scanf("%d",&bs);
    da=bs*0.5;
   
    printf("da=%f",da);
    
    hra=bs*0.12;
    printf("hra=%f",hra);
    ta=bs*0.8;
    printf("ta=%f",ta);
    gs=bs+hra+da+ta;
    printf("gs=%f",gs);
    itax=bs*0.10;
    printf("itax=%f",itax);
    ns=gs-itax;
    printf("ns=%f",ns);
    return 0;

}