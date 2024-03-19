#include <stdio.h>
//#include <stdlib.h>
int sum(int, int);
int sub(int, int);
int main()
{
    int a,b,c,d;
    printf("Enter two Numbers to add");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("\n%d+%d=%d",a,b,c);
    printf("\nEnter another number");
    scanf("%d",&d);
    printf("%d-%d=%d",d,c,sub(d,c));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}
