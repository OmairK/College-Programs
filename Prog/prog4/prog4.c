#include <stdio.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}


void printpat(int n)
{

	int i,j,k;

	for (i = 0; i < n -1; ++i)
	{
		

		for (j=0; j < n-i-1; ++j)	 // spaces
		{
			printf(" " );		
		}

		for (k=0 ; k < (i+1) ; ++k) //inc no
		{
			printf("%d", k+1 );
		}


		for (k = i; k > 0; k--) //dec no
		{
			printf("%d", k	 );
		}

		printf("\n");


	}

	for (i = n-1; i > -1; i--)
	{
		

		for (j=0; j < n-i-1; ++j)	 // spaces
		{
			printf(" " );		
		}

		for (k=0 ; k < (i+1) ; ++k) //inc no
		{
			printf("%d", k+1 );
		}


		for (k = i; k > 0; k--) //dec no
		{
			printf("%d", k	 );
		}

		printf("\n");


	}





}



int main()
{

	int n;

	printf("Enter n - \n"); 
	scanf("%d", &n);



	printpat(n);

	progname();	
	return 0;
}