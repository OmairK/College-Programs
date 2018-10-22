#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[20];
	int n,i,j,k;

	printf("Enter number of elements - \n");
	scanf("%d", &n);
	int cnt=0;
	printf("\n\nEnter array - \n");

	for ( i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	int temp;
	for (i = 0 ;i < n ;i++)
	{

		temp=arr[i];

		for (j=i+1; j < n; j++)
		{	
			if(temp==arr[j])
			{
				cnt++;
				for (k = j; k < n; ++k)
				{
					arr[k]=arr[k+1];
				}


			}
			
		}
		


	}

	for ( i = 0; i < n-cnt; ++i)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}