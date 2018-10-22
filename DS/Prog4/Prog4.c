#include<stdio.h>



int main(int argc, char const *argv[])
{
	int n;

	printf("Enter Number - ");
	scanf("%i", &n);

	int num=0;
	int i,a;

	for(a=0,i=1; num < n; )
	{
		printf("%i ", num);
		num=a+i;
		i=a;
		a=num;

	}


	return 0;
}