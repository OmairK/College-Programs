#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,m, arr2[10];


	printf("Enter no. of elements in 1 arr - \n"); scanf("%d",&m);

	printf("Enter first array\n");

	for (i = 0; i < m; ++i)
	{
		scanf("%d",&arr2[i]);
	}

	int temp;

	for ( i = 0; i < m-1; ++i)
	{
		for(j=i+1; arr2[j]!='\0'; j++ )
		{
			if (arr2[i]>arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;	
			}
		}
	}


	printf("\n\n Final Arr = \n");

	for (i = 0; i < m; ++i)
	{
		printf(" %d ", arr2[i]);
	}
	return 0;
}