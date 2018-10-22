#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%i", &n);

	int i,j,cnt=0;
	printf("Even No -\n");
	for (i = 1; cnt < n; ++i)
	{
		if (i%2==0)		
		{
			printf("%i \n", i );
			cnt++;
		}

	}

	printf("Odd No -\n");
	cnt=0;
	for (i = 1; cnt < n; ++i)
	{
		if (i%2!=0)		
		{
			printf("%i \n", i );
			cnt++;
		}
	}

	return 0;
}
