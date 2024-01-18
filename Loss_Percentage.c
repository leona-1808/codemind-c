#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    float loss=((x-y)*100.0)/x;
    printf("%.2f",loss);
}