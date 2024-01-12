#include<stdio.h>
int main()
{
    int n,sum,i,squ,ss=0,m;
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    int esum=sum*sum;
    for(i=1;i<=n;i++)
    {
        squ=i*i;
        ss+=squ;
    }
    if(m=(esum-ss))
{
    printf("%d",m);
}    
    }