#include<stdio.h>
int main()
{
	int i,fact=1,a;
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
	    fact=fact*i;
	}
    
    printf("%d",fact);
	return 0;
}