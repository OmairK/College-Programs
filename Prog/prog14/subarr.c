#include <stdio.h>
#include <math.h>

int main()
{
	int num,i,j;
	printf("Enter the number of inputs you want to give: \n");
	scanf("%d",&num);
	printf("------------------------\n");
	int arr[num];
	for(i = 0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("==================================\n");

	for(j=0;j<num;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	printf("==================================\n");
	int max=0,temp=0,maxind=0,tempind=0;
	for(i=0;i<num;i++)
	{	
		if(arr[i]<=0)
			{	
				if (max==0 || temp>max)
				{
					max = temp;
					temp = 0;
					maxind = tempind;
				}
				tempind = i+1;

				continue;
			}
		temp+=arr[i];

	}
	printf("MAX SUB ARRAY\n");
	for(i=maxind;arr[i]>0;i++)
	{
		printf("%d ",arr[i]);

	}printf("\n");

	printf("MaxSum: %d Index: %d\n", max,maxind );

	int min=0,minind=0;
	temp = 0;
	tempind =0;
	for(i=0;i<num;i++)
	{	
		if(arr[i]>0)
			{	
				if (min==0 || temp<min)
				{
					min = temp;
					temp = 0;
					minind = tempind;
				}
				tempind = i+1;

				continue;
			}
		temp+=arr[i];

	}
	printf("MIN SUB ARRAY\n");
	for(i=minind;arr[i]<0;i++)
	{
		printf("%d ",arr[i]);

	}printf("\n");

	printf("MinSum: %d Index: %d\n", min,minind);


	return 0;
}