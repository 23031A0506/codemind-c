#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if(x<199)
    y=x*1.20;
    else if(x>200 && x<400)
    y=x*1.50;
    else if(x>400 && x<600)
    y=x*1.80;
    else
    y=x*2.00;
    if(y>400)
    {
        printf("%.2f",(y+(y*15)/100));
    }
    else
    {
        printf("%.2f",(y+100));
    }
}