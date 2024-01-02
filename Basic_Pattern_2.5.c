#include<stdio.h>
int main()
{
    int j,i,n;
    scanf("%d",&n);
    for(j=n;j>=1;j--)
    {
        for(i=n;i>=j;i--)
        {
            printf("%c ",64+j);
        }
        printf("
");
    }
}