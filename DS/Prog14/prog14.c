#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int arr1[10],arr2[10],arr[30];

	int m,n,i,j,k;


	int temp;


	printf("Enter no. of elements in 1st arr - \n"); scanf("%d",&m);
	printf("Enter no. of elements in 2nd arr - \n"); scanf("%d",&n);

	printf("Enter first array \n");

	for (i = 0; i < m; ++i)
	{
		scanf("%d",&arr1[i]);
	}

	printf("Enter Second array \n");	

	for (i = 0; i < n; ++i)
	{
		scanf("%d",&arr2[i]);
	}


	

	for ( i = 0; i < m-2; ++i)
	{
		for(j=i+1; arr1[j]!='\0'; j++ )
		{
			if (arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;	
			}
		}
	}


	for ( i = 0; i < n-2; ++i)
	{	
			j=i+1;
		
			if (arr2[j]>arr2[i])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
				i=0;
					
			}
		
	}






	i=0;
	j=n-1;

	for (k = 0; k <(m+n) ; ++k)
	{
		if (arr1[i]<arr2[j] && i<m)
		{
			arr[k]=arr1[i];
			i++;
		}
		else
		{
			arr[k]=arr2[j];
			j--;
		} 
	}

	k=m+n;
	arr[k]= '\0';

	printf("\n\n\n Net array  - ");
	for (i = 0; i < k; ++i)
	{
		printf("%d ", 	arr[i] );
	}



	return 0;
}