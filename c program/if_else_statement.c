#include <stdio.h>
int main()
{
    int age;
    printf("ENTER THE AGE");
    scanf("%d",&age);
    if(age>18)
    {
        printf("you can vote");
    
    }
    else{
        printf("you can't vote");
        
    }
return 0;
}