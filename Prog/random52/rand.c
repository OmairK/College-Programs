#include <stdio.h>
#include <stdlib.h>

int main()
{	int i =0,r;
	for(i=0;i<52;i++)
	{
		srand(i+1);
		r=rand()%52;
		printf("%d  ",r);

	}
	return 0;
}