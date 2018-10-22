#include<stdio.h>

int main(int argc, char const *argv[])
{
	int i,j;

	printf("Enter two number - "); scanf("%i %i", &i,&j );

	i+=j;
	j=i-j;
	i=i-j;

	printf("%i %i\n",i,j);





	return 0 ;
	
}
