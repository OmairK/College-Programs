#include<stdio.h>

int main(int argc,char const*argv[])
{
	int num;
	printf("Enter a number - ");
	scanf("%i", &num);

	int newnum=0;

	for(;num!=0;)
	{
		newnum*=10;
		newnum+=num%10;
		num/=10;

	}

	printf("Rev -  %i\n", newnum);

	return 0;	
}