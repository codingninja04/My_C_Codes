#include<stdio.h>
void main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
    printf("1st Matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter arr1[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n printing the elements of 1st Matrix...\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
    }
    printf("2st Matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter arr2[%d][%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n printing the elements of 2st Matrix...\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
    }
    printf("\n Addition of two Matrix...\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
return 0;
}
