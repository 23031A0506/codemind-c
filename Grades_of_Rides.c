#include<stdio.h>
int main()
{
    int HF,SF,Sf;
    scanf("%d%d%d",&HF,&SF,&Sf);
    if(HF>50 && SF>60 && Sf>100)
    {
        printf("%d",10);
    }
    else if(HF>50 && SF>60)
    {
        printf("%d",9);
    }
    else if(SF>60 && Sf>100)
    {
        printf("%d",8);
    }
    else if(HF>50 && Sf>100)
    {
        printf("%d",7);
    }
    else if(HF>50 || SF>60 || Sf>100)
    {
        printf("%d",6);
    }
    else
    {
        printf("%d",5);
    }
}