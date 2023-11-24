#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>2)
        if(n%2==1 || n==2)
    {
        printf("Prime");
        break;
    }
    else
    {
        printf("Not Prime");
        break;
    }
}