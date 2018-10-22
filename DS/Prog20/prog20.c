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


void addany()
{
		
	int pos;


	printf("\n\nWhere to Enter:- "); scanf("%d", &pos);

	if (pos>no)
	{
		printf("Invalid.\n");
		return;
	}




	node* newnode,*temp;
	temp=start;
	int n;
	printf("Enter Value:- \n");
	scanf("%d", &n);


	int i;

	for (i = 1; i < pos; ++i)
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

	if (start==NULL)
	{
		printf("Can only add at start\n");
		addstart1();
		return;
	}

	int pos;

	printf("Where do you want to add\n\n1. Start \n2. End \n3. Any\n");
	scanf("%d",&pos);
	
	switch(pos)
	{
		case 1: addstart2();break;
		case 2: addend(); break;
		case 3: addany(); break;
		default: printf("Invalid.\n"); add();
	}

	display();

}

void delstart()
{
	node *temp=start;
	printf("Popping %d \n", start->n );

	start=start->next;



}

void delend()
{

	node* temp=start;

	for (; temp->next->next!=NULL; temp=temp->next);

	printf("Popping %d\n", temp->next->n );
	
	temp->next=NULL;



}

void delany()
{
	int pos;

	printf("Where do you want to delete :- \n"); scanf("%d", &pos );

	if (pos>no)
	{
		printf("Invalid position \n");
		delany();
	}


	if (pos==1)
	{
		delstart();
		return;
	}

	if (pos==no)
	{
		delend();
		return ;
	}



	node* temp=start;

	int i;


	for (i = 1; i < pos-1 ; ++i , temp=temp->next);

	printf("Popping %d\n",temp->next->n );


	temp->next=temp->next->next;

}




void delete()
{
	

	int i;
	node *temp=start;

	if (start==NULL)
	{
		printf("Nothing to delete\n");
		
		return;
	}

	int choice;
	printf("\n\nWhere to Delete: \n1.Start \n2.End \n3.Other"); scanf("%d", &choice);

	switch(choice)
	{
		case 1: delstart();break;
		case 2: delend(); break;
		case 3: delany();break;
		case 4: return;
		default : printf("Invalid\n");delete();

	}

	no--;
	

	display();

}




int main(int argc, char const *argv[])
{
	
	system("clear");

	int ch;
	
	do
	{

		printf("\nChoose :- \n1. Insert\n2. Display \n3. Delete\n4. Exit");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: add();break;
			case 2: display(); break;
			case 3: delete(); break;
			case 4: return ; 
			default : printf("Invalid.\n\n\n");system("clear");
		}



	}while(ch!=4);




	return 0;
}