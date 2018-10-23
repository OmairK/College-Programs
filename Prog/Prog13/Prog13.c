#include <stdio.h>
#include <string.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}
int main(int argc, char const *argv[])
{
	
	char arr[100];
	gets(arr);


	int word=1;
	int p;

	for (p = 0; arr[p]!=NULL; ++p)
	{
		if (arr[p]==' ')
		{
			word++;
		}
	}

	if (arr[p-1]==' ')
	{
		word--;
	}

	int cnt=0;


	printf("\nWords = %i\n", word);

	char words[10][20];

	int i,j,l,k=0;

	for (i = 0; arr[i]!=NULL ; i++)
	{
		
		

		if (arr[i-1]==' ' || i==0 )
		{
	


			for (j = i,l=0; arr[j]!=' ' && arr[j]!=NULL ; ++j,l++)
				words[k][l]=arr[j];
			
			
			words[k][l]=NULL;
			k++;
		}		

	}

	//printf("WORKING\n");



/*
	
*/



	for ( i = 0; i<word; ++i)
	{
	
		printf("%s ", words[i] );

		if (strcmp(words[i],words[i+1])==0)
		{
			i++;
		}


	}
	progname();






	//printf("%s\n",arr );


	return 0;
}