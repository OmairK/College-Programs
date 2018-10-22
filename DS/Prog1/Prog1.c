#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%i" , &n)	;

	int i,j,k;

	for(i=1;i<=n;i++)

	{
		int a;
		a=i*i;
		printf("\n Square = of %i is %i ", i,a );

	}


	for(i=1;i<=n;i++)
	{
		float a;
		a=sqrt(i);
		printf("\n Square root = of %i is %f ", i,a );
	}


return 0;
}	
