#include <stdio.h>


struct p
{
	int n;
	struct p* next;
}*start=NULL;

int no=0;

typedef struct p node;

void display()
{
	node *temp;
	temp=start;
	printf("\n\n\nOutput: ");
	
	int i;

	for (i = 0; i < no; ++i)
	{
		printf("%d ", temp->n );
		temp=temp->next;
	
	}




}


void addstart1()
{
	node* newnode;
	int n;
	printf("Enter Value:- \n");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	
	newnode->n=n;
	newnode->next=NULL;
	start=newnode;
	no++;
}



void addstart2()
{
	node* newnode;
	int n;
	printf("Enter Value:- \n");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	
	newnode->n=n;
	newnode->next=start;
	start=newnode;
	no++;
}



void addend()
{
	
	node* temp;
	node *newnode;
	
	temp=start;

	for (; temp->next!=NULL;temp=temp->next);
	
	int n;
	printf("Enter Value:- \n");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	newnode->n=n;
	newnode->next=NULL;
	temp->next=newnode;
	no++;
}


void addany(int pos)
{
		
	node* newnode,*temp;
	temp=start;
	int n;
	printf("Enter Value:- \n");
	scanf("%d", &n);


	int i;

	for (i = 0; i < pos; ++i)
	{
		temp=temp->next;
	}


	newnode=(node *)malloc(sizeof(node));
	
	newnode->n=n;
	newnode->next=temp->next;
	temp->next=newnode;
	no++;

}


void add()
{
	
	int i;
	node *temp=start;

	if (start==NULL)
	{
		printf("Can only add at start\n");
		addstart1();
		return;
	}

	int pos;
	printf("\n\nWhere to Enter:- "); scanf("%d", &pos);

	if (pos>no)
	{
		printf("Invalid.\n");
		return;
	}


	int j;
	
	temp=start;
	
	for (j= 1; j <pos ; ++j)
	{
		temp=temp->next;
	}

	node *newnode;

	if (pos==1&& start->next!=NULL)
	{
		addstart2();
		return;
	}

	if (pos==no)
	{
		addend();
		return;		

	}
	else
	{
		pos--;
		addany(pos);
	}



}




int main(int argc, char const *argv[])
{
	
	system("clear");

	int ch;
	
	do
	{

		printf("\nChoose :- \n1. Insert\n2. Display \n3.Exit");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: add();break;
			case 2: display(); break;
			case 3: return ; 
			default : printf("Invalid.\n\n\n");system("clear");
		}



	}while(ch!=3);




	return 0;
}