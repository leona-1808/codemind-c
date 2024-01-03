#include<stdio.h>
int main()
{
    int m,n,sum;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int oddsum=0,evensum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i][j]%2==0)
        {
            evensum=evensum+a[i][j];
        }
        else {
            oddsum=oddsum+a[i][j];
        }
        }
    }
        printf("%d %d",evensum,oddsum);
    
}