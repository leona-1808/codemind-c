#include<stdio.h>
int main()
{
    int j,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",64+j);
        }
        printf("
");
    }
}