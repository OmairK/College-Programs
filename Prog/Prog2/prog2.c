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




void printheli()
{


	int m1=0,n1=0;
	int i=0,j=0;
	int m2=m,n2=n;
	int flag=0;
	int cnt;


	for (; m1<m2&&n1<n2 ; flag++ )
	{
		
	
		if(flag%2==0)
		{

			for (cnt=0; cnt<(n2-n1) ; cnt++ )
			{			

				printf("%d ",mat[i][j] );
				//printf("%d-%d\n",i,j );
		

				if(flag%4==0)
				{
					j++;
				}
				else 
				{
					j--;
				}
			

			}


		


			if(flag%4==0)
			{	
				n2--;
				j--;
				i++;
			}
			else 
			{
				n1++;
				j++;
				i--;
			}
		
		
		}
		else
		{

			for (cnt=0; cnt<(m2-m1-1)  ; cnt++ )
			{

			

				printf("%d ",mat[i][j] );
				//printf("%d-%d\n",i,j );
			

				if(flag%4==1)
				{
					i++;
				}
				else
				{
					i--;
				}

			}	



			if(flag%4==1)
			{	
				m2--;
				j--;
				i--;
			}
			else
			{
				m1++;
				i++;
				j++;
			}
	
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


int main(int argc, char const *argv[])
{
	


	int choice;

	do
	{

		printf("Choose one - \n1.Enter Matrix \n2.Print mat \n3.Print helical form\n4.Exit\n");	
	 	scanf("%d", &choice);


 		switch(choice)
 		{
			case 1: entermat(); break;
			case 2: showmat(); break;	
			case 3: printheli(); break;
			
			case 4 : break;
 		}


 	}while(choice!=4);

 	progname();	


 	return 0;
}