#include<stdio.h>

int main(int argc,char const *argv[])
{
	int num;

	printf("Enter number")	;
	scanf("%i",  &num);

	double fac=1;
	int i;

	for( i=num ;i>0;i--)
		{
			fac*=i;
		}


		printf("\nFactorial = %n \f",fac);

	return 0;
}