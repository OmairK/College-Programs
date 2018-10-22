#include <stdio.h>


int mat[30][30];
int n,m;


void printele()
{

	int i,j,k;


	int posl,posu;

	for(i=0;i<m;i++)   
		{		


			for (j = 0; i < n; ++j)
			{
			
				posu=0;

				if(mat[i][j]>mat[i][posu])
				{
					posu=j;	

				}


			}


			for (k = 0; k < m; ++k)
			{
				
				posl=0;

				if(mat[k][posu]>mat[i][posu])
				{
					posl=k;	

				}


			}



			if(posl==i)
			{
				printf("%d \n", mat[posl][posu] );
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

		printf("Choose one - \n1.Enter Matrix \n2.Print row high col low \n3.Exit\n");	
	 	scanf("%d", &choice);


 		switch(choice)
 		{
			case 1: entermat(); break;
			case 2: printele(); break;
			case 3: break;	

 		}


 	}while(choice!=3);

 	


 	return 0;
}	