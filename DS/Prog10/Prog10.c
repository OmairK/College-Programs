#include<stdio.h>


void fibo(int n,int a, int b)
{
	int c;
	c=a+b;

	printf("%i ",c );

	if (c>=n)
	{
		return ;
	}



	fibo(n,b,c);


}



int main(int argc, char const *argv[])
{
	int n;

	printf("Enter Number - ");
	scanf("%i", &n);

	int a=0,b=1;
	printf("%i %i ", a,b);



	fibo(n,a,b);


	return 0;
}