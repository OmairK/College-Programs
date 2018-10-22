#include<stdio.h>

int main(int argc, char const *argv[])
{
	int num;

	printf("Enter main number -"); scanf("%i", &num);

	int a;

	printf("Enter value - ");
	scanf("%i", &a);
	for(;a!=-99;)
	{
		

		if(num>a)
			printf("First Value is greater \n");
		else if(num<a)
			printf(" Second Value is greater \n");
		else if(a==num)
			printf(" Equal\n");
		


		printf("Enter value - ");
		scanf("%i", &a);


	}
	
}