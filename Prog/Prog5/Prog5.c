#include <stdio.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}



char num[][15]={"zero","one","two","three","four","five","six","seven","eight","nine", "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char tens[][15]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};






int main(int argc, char const *argv[])
{
	
	



	int arr[20];
	int n;
	printf("Enter Number (in digits) - "); scanf("%d", &n);
	int ten,hun,tho,lac,cr;

	if (n>=	1000000000)
	{
		printf("Value too large\n");
		return 0 ;
	}

	int i,j,k;
	int temp, opn;
	for (i = 1, temp=n; ; ++i)
	{
		

		temp=temp/10;

		if (temp==0)
		{
			break;
		}

	}

	hun=0;
	tho=0;
	lac=0;
	cr=0;

	temp=n;

	hun=temp%1000;
	temp=temp/1000;
	if (temp==0)
	{
		goto x;
	}
	tho=temp%100;
	temp=temp/100;
	if (temp==0)
	{
		goto x;
	}
	lac=temp%100;
	temp=temp/100;
	if (temp==0)
	{
		goto x;
	}
	cr=temp%100;
	temp=temp/100;

	//printf("REACHING\n");
x:

	

	if (cr!=0)
	{			


		if (cr>20 && cr%10 != 0 ) 
		{
			printf("%s %s Crore ", tens[(cr/10)-2] , num[cr%10] );
		}
		else if (cr>20)
		{
			printf("%s Crore ", tens[(cr/10)-2] );
		}
		else
			printf("%s Crore ", num[cr] );



		
	}

	if(lac!=0)
	{	
		if (lac>20 && lac%10 != 0 ) 
		{
			printf("%s %s Lakh ", tens[(lac/10)-2] , num[lac%10] );
		}
		else if (lac>20)
		{
			printf("%s Lakh ", tens[(lac/10)-2] );
		}
		else
			printf("%s Lakh ", num[lac] );
		
	}

	if(tho!=0)
	{	
		if (tho>20 && tho%10 != 0 ) 
		{
			printf("%s %s Thousand ", tens[(tho/10)-2] , num[tho%10] );
		}
		else if (tho>20)
		{
			printf("%s Thousand ", tens[(tho/10)-2] );
		}
		else
			printf("%s Thousand ", num[tho] );
		
	}

	if(hun!=0)
	{
		if (hun>99)
		{
			printf("%s Hundered ", num[hun/100] );
		}

		ten=hun%10;
		hun/=10;
		ten+=10*(hun%10);

		//printf("\n\n TEN = %d\n",  ten);

		if (ten>20 && ten%10 != 0 ) 
		{
			printf("%s %s ", tens[(ten/10)-2] , num[ten%10] );
		}
		else if (ten>20)
		{
			printf("%s ", tens[(ten/10)-2] );
		}
		else
			printf("%s ", num[ten] );
		
	}
	progname();




	return 0;
}