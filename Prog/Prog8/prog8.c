#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char* a;

	FILE *fp;


/*
	fp=fopen("Text1.txt", "w");
	printf("Enter string - \n"); gets(a);

	fprintf(fp, "%s\n",a);
	fclose(fp); */



 	fp=fopen("Text1.txt", "r");
 	fgets(a,100,fp);

 	int i,j;


 	printf("%s ", a );



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
		
	}


	fclose(fp);

	fp=fopen("Text1.txt","w");

	fprintf(fp, "%s\n",a);
	fclose(fp);





	return 0;
}