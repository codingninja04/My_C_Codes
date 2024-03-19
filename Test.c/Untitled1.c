#include<stdio.h>
int main()
{
    int a,i;
    printf("enter a num:");
    scanf("%d,&a");
    for(i=2;i<a;i++)
    {
        if(i==a/2)
        printf("%d is prime",a);

    }
    {
        if(i!=a/2)
        printf("%d is non-prime",a);
    }
    return 0;
}
