#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}



void checkoct(int a)
{
	int temp=a;

	for(;temp!=0;)
	{
		if (temp%10<8)
		{
			temp/=10;
		}
		else
		{	
			printf("Invalid input. Try again.\n\n\n");
			main();
		}
	}

}





int main(int argc, char const *argv[])
{

	int oct;
	int dec;
	char hex[20];
	int temp;
	int i,j,k;

	printf("\n\nEnter Octal number - \n"); scanf("%i",&oct);

	if (oct==999)
	{
		return 0;	
	}

	checkoct(oct);		

	temp=oct;
	dec=0;

	for (i=0; temp!=0; i++ )
	{
		
		j=temp%10;
		dec+=(j*pow(8,i));
		temp/=10;


	}


	printf("Dec = %d \n", dec);

	temp=dec;
	char var;

	for (i=0; temp!=0 ;i++)
	{
		
		k=temp%16;

		if (k==10)
		{
			var='A';
		}
		else if (k==11)
		{
			var='B';
		}
		else if (k==12)
		{
			var='C';
		}
		else if (k==13)
		{
			var='D';
		}
		else if (k==14)
		{
			var='E';
		}
		else if (k==15)
		{
			var='F';
		}
		else
		{
			var= k + '0';
		}



		hex[i]=var;
		temp/=16;
	}

	int n=strlen(hex);

	for (i = 0; i < n/2 ; ++i)
	{
		temp=hex[i];
		hex[i]=hex[n-i-1];
		hex[n-i-1]=temp;
	}

	printf("Hex - %s\n", hex );
	progname();






	return 0;
}