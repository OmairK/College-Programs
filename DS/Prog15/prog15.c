#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[20];
	int n,i,j;

	printf("Enter number of elements - \n");
	scanf("%d", &n);

	printf("\n\nEnter array - \n");

	for ( i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	int temp;
	for (i = 0, j =n-1;i < (n/2); ++i,j--)
	{

		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;


	}


	for ( i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}