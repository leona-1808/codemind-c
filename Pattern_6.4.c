#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(i-1);j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}