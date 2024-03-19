// Online C compiler to run C program online
#include<stdio.h>

int main() {
    // Write C code here
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x % 2 == 0)
        printf("%d is even. \n",x);

    else
     printf("%d is odd",x);
   // printf("Hello world");

    return 0;
}
