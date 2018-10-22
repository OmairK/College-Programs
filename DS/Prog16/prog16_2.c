#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[20], narr[20];
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
	int p, flag=0;
	narr[0]=arr[0];
	

	for (i = 0,j=0 ;i < n ;i++)
	{

		flag=0;
		

		for (p = 0; p < j ; p++)
		{
			
			if (narr[p]==arr[i])	
				{
					flag++;
					cnt++;
				}
			else continue;
		}

		if(flag==0)
			{
				narr[j]=arr[i];
				j++;
			}
	}

	for ( i = 0; i < n-cnt; ++i)
	{
		printf("%d ", narr[i]);
	}



	return 0;
}