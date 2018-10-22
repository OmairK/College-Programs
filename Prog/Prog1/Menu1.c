#include <stdio.h>





void fac()
{
	system("clear");
	int num;

	printf("Enter number - ")	;
	scanf("%i",  &num);

	int fac=1;
	int i;

	for( i=num ;i>0;i--)
		{
			fac*=i;
		}


		printf("\nFactorial =  %d \n\n",fac);

}



void sumser()
{
	system("clear");
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);

	float i,j, sum=0;

	for (i = 1; i <= n; ++i)
	{
		

		int fac=1;

		for (j = i; j >=1; j--)
		{
			fac*=j;

		}

		sum+= i/(fac);


	}

	printf("Sum = %f\n",sum );






}




void fibo()
{
	system("clear");
	int n;

	printf("Enter Number - ");
	scanf("%i", &n);

	int num=0;	
	int i,a;
	int cnt=0;

	for(a=0,i=1; cnt< n; )
	{
		printf("%i ", num);
		num=a+i;
		i=a;
		a=num;

		cnt++;

	}


}



void sumdig()
{
	system("clear");

	int n;
	printf("Enter Number - \n");
	scanf("%d",&n);

	int sum=0;


	for(;n!=0;)
	{

		sum+=n%10;

		n/=10;



	}
printf("\nSum = %d \n",sum );






}






int main(int argc, char const *argv[])
{

	int n;
	
	system("clear");	

	do
	{


	printf("\n\nChoose one \n1. Factorial \n2. Sum of 1/1! + 2/2! + 3/3! ----\n3. Fibo\n4. Sum of Digits\n5.Exit\n");
	scanf("%i", &n);

	switch (n)

				{
					case 1 : fac(); break;
					case 2 : sumser(); break;
					case 3 : fibo(); break;
					case 4 : sumdig(); break;
					case 5 : break;
					default : printf("Invalid. Try again\n");break;
				}




	}while(n!=5);


	
	return 0;
}











