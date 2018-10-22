#include <stdio.h>



char num[][15]={"Empty","I","II","III","IV","V","VI","VII","VIII","IX", "X","XI","XII","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char tens[][15]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};


char roman[]={'I','V','X','L','C','D','M'};




int main(int argc, char const *argv[])
{
	

	int arr[20];
	int n;
	printf("Enter Number (in digits) - "); scanf("%d", &n);
	int tens,hun,tho,lac,cr;

	if (n>=	100000)
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
	

	//printf("REACHING\n");
x:


	if(tho!=0)
	{	
		for (i = 0; i <tho ; ++i)
		{
			printf("%c", roman[6] );
		}


	}

	if(hun!=0)
	{
	

		tens=hun%100;
		hun/=100;


		if (hun>=1 && hun<4)
		{
			
			for (i = 0; i < hun; ++i)
				printf("%c", roman[4] );


		}
		else if (hun>=4 && hun<9)
		{
			
			
			if (hun<5)
			{
				printf("%c%c", roman[4],roman[5] );
			}


			if (hun>=5&&hun<9)
			{
				
				printf("%c\n", roman[5] );
				for (i = 0; i < hun-5; ++i)
					printf("%c", roman[4] );
			}

		}
		else if (hun>8)
		{
			printf("%c%c", roman[4],roman[6] );



		}

	

		
	}







	int ones;


	if(tens!=0)
	{
		ones=tens%10;
		tens/=10;

		if (tens>=1 && tens<4)
		{
			
			for (i = 0; i < tens; ++i)
				printf("%c", roman[2] );


		}
		else if (tens>=4 && tens<9)
		{
			
			
			if (tens<5)
			{
				printf("%c%c", roman[2],roman[3] );
			}


			if (tens>=5&&tens<9)
			{
				
				printf("%c", roman[3] );
				for (i = 0; i < tens-5; ++i)
					printf("%c", roman[2] );
			}

		}
		else if (tens>8)
		{
			printf("%c%c", roman[2],roman[4] );



		}

		





		
	}






	if(ones!=0)
	{
		
		if (ones>=1 && ones<4)
		{
			
			for (i = 0; i < ones; ++i)
				printf("%c", roman[0] );


		}
		else if (ones>=4 && ones<9)
		{
			
			
			if (ones<5)
			{
				printf("%c%c", roman[0],roman[1] );
			}


			if (ones>=5&&ones<9)
			{
				
				printf("%c", roman[1] );
				for (i = 0; i < ones-5; ++i)
					printf("%c", roman[0] );
			}

		}
		else if (ones>8)
		{
			printf("%c%c", roman[0],roman[2] );



		}

		





		
	}


	printf("\n");











	return 0;
}