#include <stdio.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}

int main(int argc, char const *argv[])
{
	char *a=(char*)malloc(sizeof(char)*100);

	printf("Enter a string - \n"); gets(a);

	int i,j;





	for (i = 0; a[i]!=NULL ; ++i)
	{
		if(a[i]==a[i+1])
		{
			for (j= i; a[j]!=NULL; ++j)
			{
				a[j]=a[j+1];
			}
			i--;

		}
		//printf("\n Loop run %i \n", i );
	}

	printf("\n\n String - %s\n", a);

	progname();
	return 0;
}