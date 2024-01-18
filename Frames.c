#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int area=2*(x+y);
    int price=z*area;
    printf("%d",price);
}