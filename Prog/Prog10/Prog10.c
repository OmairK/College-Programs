#include <stdio.h>	


int checkdate(char a[])
{
	int i,j=0;
	int flag=0;
	int leap=0;


	if (!(a[2]=='/' &&  a[5]=='/' && a[10]==NULL))
	{
		printf("Invalid Date\n");
		return 0;
	}

	

	int year=0;

	year= (year*10) + (atoi(&a[6]))  ;	
	

	//printf("\nYEAR - %i", year);

	

	if (!(year>0 && year < 2050))
	{
		printf("Invalid Date.\n");
		return 0;
	}

	if(year%4==0)
		leap=1;



	int month=0;

	month= atoi(&a[3]);

	//printf("Month = %i\n", month);


	if (!(month>0 && month<13))
	{
		printf("Invalid Date\n");
		return 0;
	}



	int day=0;
	
	day= atoi(&a[0]);

	//printf("Days - %d\n",day );
	

	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if (day<1|| day>31)
		{
			printf("Invalid date.\n");
			return 0;
		}
	}
	else if (month==4 || month==6 || month==9 || month==11)
	{
		if (day<1 || day>30)
		{
			printf("Invalid date\n");
			return 0;

		}
	}
	else
	{
		if (  !( (leap==1 && (day>0 && day<30)) || (leap==0 && (day>0 && day<29) ) ))
		{
			printf("Invlid Date\n");
			return 0;

		}
	}


return 1;



}



int checktime(char a[])
{
	int i,j,k;

	if (!(a[2]==':' &&  a[5]==':' && a[8]==NULL))
	{
		printf("Invalid Time\n");
		return 0;
	}

	int hour;
	hour= atoi(&a[0]);

	int mins;

	mins= atoi(&a[3]);

	int sec;

	sec= atoi(&a[6]);


	if (!(sec>=0 && sec<60))
	{
		printf("Invalid Time\n");
		return 0;
	}

	if (!(mins>=0 && mins<60))
	{
		printf("Invalid Time\n");
		return 0;
	}

	if (!(hour>=0))
	{
		printf("Invalid Time\n");
		return 0;
	}



	return 1;
}




int main(int argc, char const *argv[])
{
	char date[15], timee[15];
	 system("clear");

	printf("\nValidadtion \n\nEnter Date (dd/mm/yyyy) - ");
	gets(date);


	printf("\nEnter Time (hh:mm:ss) - ");
	gets(timee);




	int check1,check2=0;

	//printf("REACHING1\n");
	check1=checkdate(date);
	//printf("REACHING2\n");

	if (check1==1)
	{
		printf("Valid date.\n");

	}	


	check2=checktime(timee);
	
	



	if (check2==1)
	{
		printf("Valid Time\n\n");
	}
	



	return 0;
}