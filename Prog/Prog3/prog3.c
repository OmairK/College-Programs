#include <stdio.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}

int mat[30][30];
int n,m;


 void showmat()
 {

 	int i,j;

	for (i = 0; i < m; ++i)
	{
		
		for (j = 0; j < n; ++j)
		{
			printf("%d ", mat[i][j]);
			

		}

		printf("\n");

	}

 }



void printele()
{

	int i,j,k;
	int temp,max,min;
	i=0;
	j=0;
	int posmax;


	int rowmax,colmin;
	int flag;


	for(i=0;i<m;i++)   
		{		
			j=0;
			flag=0;


			max=mat[i][j];

			for (j = 0; j < n; ++j)
			{
			
				if(mat[i][j]>=max)
				{
					max=mat[i][j];	
					posmax=j;

				}

			}

			for (k = 0; k < m; ++k)
			{
				
				if(mat[k][posmax]<mat[i][posmax])
				{
					flag++;	

				}

			}	
			


			if(flag==0)
			{
				printf("\n%d is the element \n\n\n", max);
				
				//printf("%d - %d \n", posl,posu);
			}
			





		}




}


void entermat()
{

	
	printf("Enter no. of rows - \n");scanf("%d",&m);
	printf("Enter no. of columns - \n");scanf("%d",&n);

	int i,j;

	for (i = 0; i < m; ++i)
	{
		
		for (j = 0; j < n; ++j)
		{
			printf("Enter element in %d row and %d column \n", i+1,j+1);
			scanf("%d", &mat[i][j]);

		}


	}


}



int main(int argc, char const *argv[])
{
	

	int choice;

	do
	{

		printf("Choose one - \n1.Enter Matrix\n2. show \n3.Print row high col low \n4.Exit\n");	
	 	scanf("%d", &choice);


 		switch(choice)
 		{
			case 1: entermat(); break;
			case 2: showmat(); break;
			case 3: printele(); break;	
			case 4: break;
 		}


 	}while(choice!=4);

 	progname();	


 	return 0;
}	