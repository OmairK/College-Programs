#include <stdio.h>

void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}



int checkusername(char* a)
{
	int i=0;


	int flag=0;

	for (i = 0; a[i]!=NULL ; ++i)
	{
		if (a[i]=='@')
		{
			flag++;
		}

	}


	if (flag!=1)
	{
		printf("Invalid Email \n\n");
		return 0 ;
	}





	for (i = 0; a[i]!= '@' ; i++)
	{
		if (i>20)
		{
			printf("Invalid. Email ID too long \n");
			return 0 ;
		}

	}




	if (!isalpha(a[0]))
	{
		printf("Invalid. Must start with an alphabet\n");
		return 0 ;
	}

	for (i = 1; a[i]!='@'; ++i)
	{
		if ( !( isalnum(a[i]) || a[i]=='_' ||a[i]=='.' ))
		{
			printf("Invalid Email\n");
			return 0;
		}
	}



	return 1;

	//printf("Working\n");



}



int checkservice(char* a)
{
	int i,j,k;
	int flag=0;


	for (i = 0; a[i]!= '@' ; i++);
	
		j=i+1;


	if (!isalpha(a[j]))
	{
		printf("Invalid\n");
		return 0;
	}


	for (i = j; a[i]!='.'; ++i)
	{

		if (!isalpha(a[i]))
		{
			printf("Invalid\n");
			return 0;
		}

	}
	

	for (i = j; a[i] != NULL ; ++i)
	{
		if (a[i]=='.')
		{
			flag++;
			if (flag==1)
			{
				k=i;
			}


		}

	}




	if (flag==0)
	{
		printf("Invalid.\n");
		return 0 ;
	}

	i = k+1;
	
	if ((a[i]=='c' && a[i+1]=='o' && a[i+2]=='m' && a[i+3]==NULL  ) 
	     || (a[i]=='c' && a[i+1]=='o' && a[i+2]=='.' && a[i+3]=='i' && a[i+4]=='n' && a[i+5]==NULL ) 
	     || (a[i]=='o' && a[i+1]=='r' && a[i+2]=='g' && a[i+3]==NULL  ) 
		 || (a[i]=='e' && a[i+1]=='d' && a[i+2]=='u' && a[i+3]==NULL  ) 
		 || (a[i]=='i' && a[i+1]=='n'  && a[i+2]==NULL  )     )
	{
		//printf("TRUE!!!\n");
		return 1;
	}
	else
	{
		printf("Invalid.\n");
		return 0;
	}
	




}


int main(int argc, char const *argv[])
{
	char email[30];
	char* e;

	system("clear");

	e=&email;

	printf("\nEmail Validadtion \n\nEnter Email ID - ");
	gets(email);

	int check1,check2=0;


	check1=checkusername(e);

	if (check1==1)
	{
		
	check2=checkservice(e);
	
	}



	if (check2==1)
	{
		printf("\nValid Email ID!\n");
	}
	progname();

	return 0;
}