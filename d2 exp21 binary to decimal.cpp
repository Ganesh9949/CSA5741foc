#include<stdio.h>
int main()
{
	int n,bin,dec=0,base=1,rem;
	printf("enter binary number:");
	scanf("%d",&n);
	bin=n;
	while(n>0)
	{
		rem=n%10;
		dec=dec+rem*base;
		n=n/10;
		base=base*2;
	}
	printf("the decimal is :%d",dec);
	return 0;
}