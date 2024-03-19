#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    clrscr();
    char i[20];
    textcolour(GREEN);
    printf("Enter your name in Capital letter");
    scanf("%s",&i);
    for(int j=1;j<=20;j++)
    {
        cprintf("HAPPY BIRTHDAY %s \2 \n",i);
        delay(200);
    }
    getch();
}
