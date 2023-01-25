#include<stdio.h>
#include<math.h>
long long convertOctalToDecimal(int octal);
int main()
{
	int octal;
	printf("enter an octal number:");
	scanf("%d",&octal);
	printf("%d in octal=%d in decimal",octal,convertOctalToDecimal(octal));
	return 0;
}
long long convertOctalToDecimal(int octal)
{
	int dec=0,i=0;
	while(octal!=0)
	{
		dec=dec+(octal%10)*pow(8,i);
		++i;
		octal=octal/10;
	}
	i=1;
	return dec;
}