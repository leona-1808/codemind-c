#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int res=m/60;
    int min=m-res*60;
    printf("%d Hour(s) %d Minute(s)",res,min);
}