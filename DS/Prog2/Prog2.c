#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%i", &n );

	int cnt,i,j,k=0;

	for(i=1; k<n;i++)
	{
		cnt=1;	
		for (j = i/2; j >=1; j--)
		{
			if (i%j==0)
			{
				cnt++;
			}
			
		}



		if (cnt==2)
		{
			printf("%i \n ", i );
			
			k++;
		}

	}


	return 0;
}