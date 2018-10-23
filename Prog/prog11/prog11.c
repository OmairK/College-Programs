#include <stdio.h>
#include <math.h>
void progname()
{
	printf("\n");
	printf("DANIYAL ABBASI\n");
	printf("17BCS069\n");
	printf("CS SEM 3\n");
}

int main(int argc, char const *argv[])
{
	char arr[40];
	int count;
	printf("\n\nEnter Complex no :- "); gets(arr);

	for (count = 0; arr[count]!=NULL ; count++);


	int num_one;

	float num_one_real=0, num_one_img=0;

	float num_two_real=0, num_two_img=0;

	int flag1=0,flag2=0,flag3=0,flag4=0;
	int flag5=0;

	int i;

	for (i = 0; i < count; ++i)
	{
		
		

		if (arr[i]==' ')
		{
			flag1++;
			flag2=0;
			flag3=0;
			flag4=0;
			flag5=0;
			continue;

		}


		if (flag1==0)
		{


			
			if (arr[i]=='+'|| arr[i]=='-')
			{
				
				flag2++;	
				flag3=0;
				flag5=0;
				continue;
			
			}
			

			

			if (flag2==0)
			{
				


				if (arr[i]=='.')
				{
					flag3++;
					flag5=0;
					continue ;


				}

				if (flag3==0)	
					num_one_real= 10*num_one_real + (int)arr[i]-48;

				if (flag3==1)
				{
					flag5++;
					num_one_real+= pow(10,-flag5)* ((int)arr[i]-48);
				}
			

		
			}

			else if (flag2==1)
			{


				if (arr[i]=='J' || arr[i]=='j')
				{
					continue ;
				}

				if (arr[i]=='.')
				{
					flag3++;
					continue ;

				}

				if (flag3==0)	
					num_one_img= 10*num_one_img + (int)arr[i]-48;

				else if (flag3==1)
				{
					flag5++;
					num_one_img+= ( pow(10,-flag5)*  ((int)arr[i]-48));
				}

			}



		}
		else if (flag1==1)
		{


			if (arr[i]=='+'|| arr[i]=='-')
			{
				flag2++;
				
				flag3=0;
				flag5=0;
				continue;
			}
			

			

			if (flag2==0)
			{
				


				if (arr[i]=='.')
				{
					flag3++;
					continue ;

				}

				if (flag3==0)	
					num_two_real= 10*num_two_real + (int)arr[i]-48;

				if (flag3==1)
				{
					flag5++;
					num_two_real+= pow(10,-flag5)* ((int)arr[i]-48);
				}
			

		
			}

			else if (flag2==1)
			{




				if (arr[i]=='J' || arr[i]=='j')
				{
					continue ;
				}

				if (arr[i]=='.')
				{
					flag3++;
					continue ;

				}

				if (flag3==0)	
					num_two_img= 10*num_two_img + (int)arr[i]-48;

				else if (flag3==1)
				{
					flag5++;
					num_two_img+= ( pow(10,-flag5)*  ((int)arr[i]-48));
				}

			}


	
		}




	}
	printf(" %f+%fj\n",num_one_real+num_two_real,num_one_img+num_two_img );


	printf("Num1 Real - %f Img - %f\n", num_one_real,num_one_img );
	printf("Num2 Real - %f Img - %f\n", num_two_real,num_two_img );
	progname();
	return 0;
}