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


int* insarr (int arr[], int len)
{
	
	int ch,pos;
	printf("Enter position at which element to be inserted - \n");
	scanf("%d", &pos);

	printf("Enter element to be inserted - \n");
	scanf("%d", &ch);



	int newarr[20];

	int i;
	for (i = 0; i < pos-1; ++i)
	{
		newarr[i]=arr[i];
		
	}
	newarr[pos-1]=ch;

	for (i=pos; i < len; ++i)
	{

		newarr[i+1]=arr[i];
		
	}

arr[len]=0;
arr[len+1]=NULL;


for (i = 0; i <= len; ++i)
{
	arr[i]=newarr[i];
}

len++;

}





int main(int argc, char const *argv[])
{
	
	int arr[20];

	int len=0;

	int choice;


	do
	{


		
		printf("Choose one \n1.Enter Array \n2.Show array\n3.Insert\n4.Exit\n");	
		
		scanf("%d", &choice);			

		switch(choice)
			{
				case 1: len = enterarr(arr);break;
				case 2: showarr(arr,len); break;
				case 3: insarr(arr,len);len++;break;
				case 4: break;
				default: printf("Invalid choice. Try again.\n");			
			}	

		
	
	}while(choice!=4);
	return 0;
}