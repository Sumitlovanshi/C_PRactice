#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i-j+1);

        }
        printf("\n");
    }
}