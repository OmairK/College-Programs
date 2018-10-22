#include <stdio.h>





int enterarr(int arr[])
{
	int ch;
	printf( "Enter number of elements to be added - \n" );
	scanf("%i", &ch);

	printf("Enter elements - \n");
	int i;


	for (i = 0; i < ch; ++i)
	{	
		scanf("%i \n", &arr[i]);
	}

	return ch;
}





void showarr(int arr[], int len)
{
	int i;
	for (i = 0; i <len ; ++i)
	{
		printf("%d\n",arr[i] );
	}


}




void swaparr(int arr[], int len)
{

int i,j;

int largest, smallest;

int temp;

int poslarge,poslarge2, possmall, possmall2;

temp=0;


for (i = 0; i < len; ++i)
{	

	if(arr[i]>=arr[temp])
			{
				temp=i;
			}
	
}

poslarge=temp;


temp=0;

for (i = 0; i < len; ++i)
{	

	if( arr[i]>=arr[temp]  &&  arr[i]!=arr[poslarge] )
			{
				temp=i;
			}
	
}

poslarge2=temp;



temp=0;
for (i = 0; i < len; ++i)
{	

	if(arr[i]<=arr[temp])
			{
				temp=i;
			}
	
}

possmall=temp;


temp=poslarge;

for (i = 0; i < len; ++i)
{	

	if( arr[i]<=arr[temp]  &&  arr[i]!=arr[possmall] )
			{
				temp=i;
			}
	
}

possmall2=temp;





temp=arr[possmall2];
arr[possmall2]=arr[poslarge2];
arr[poslarge2]=temp;



}







int main(int argc, char const *argv[])
{
	

	int arr[20];

	int len=0;

	int choice;

	

	do
	{


		
		printf("Choose one \n1.Enter Array \n2.Show array\n3.Swap\n4.Exit\n");	
		
		scanf("%d", &choice);			

		switch(choice)
			{
				case 1: len = enterarr(arr);break;
				case 2: showarr(arr,len); break;
				case 3: swaparr(arr,len);break;
				case 4: break;
				default: printf("Invalid choice. Try again.\n");			
			}	

		
	
	}while(choice!=4);
	

	return 0;
}
