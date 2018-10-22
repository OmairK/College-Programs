#include <stdio.h>
#include <stdlib.h>


struct stack
{
	int n;
	struct node *next;

}*TOP=NULL,*F=NULL,*R=NULL;

typedef struct stack node;

void push()
{
	system("clear");
	
	node *newnode;

	int n;
	printf("Enter Number - \n");
	scanf("%d",&n);

	newnode=(node*)malloc(sizeof(node));

	if (TOP==NULL)
	{
		TOP=newnode;
		newnode->next=NULL;
		newnode->n=n;
	}
	else 
	{
		newnode->next=TOP;
		TOP=newnode;
		newnode->n=n;
	}


}

void pop()
{



	if (TOP==NULL)
	{
		printf("Nothing to pop. \n\n");
		return;		
	}
	else 
	{
		printf("Popping %d \n\n", TOP->n );
		TOP=TOP->next;
	}



}

void display()
{
	system("clear");

	node *temp;
	temp=TOP;

	if (TOP==NULL)
	{
		printf("Nothing to show.\n");
	}
	
	printf("\n");
	for (; temp!=NULL ; temp=temp->next )
	{
		printf("%d ", temp->n );
	}
	printf("\n");

}


void stack()
{
	int ch;

	do
	{


	printf("Enter your choice \n1.Push\n2.Pop\n3.Display\n4.Exit\nChoice - ");
	scanf("%d",&ch);


	switch (ch)
	{
		case 1: push(); break;
		case 2: pop(); break;
		case 3: display(); break;
		case 4: return;
		default: printf("\nINVALID. Try again \n");


	}

	}while(ch!=4);




}




void add()
{
	system("clear");
	
	node *newnode;

	int n;
	printf("Enter Number - \n");
	scanf("%d",&n);

	newnode=(node*)malloc(sizeof(node));

	if (F==NULL && R==NULL )
	{
		R=newnode;
		F=newnode;
		R->next=NULL;
		F->n=n;
	}
	else
	{
		R->next=newnode;
		R=newnode;
		R->next=NULL;
		newnode->n=n;
	}


}

void del()
{



	if (F==NULL)
	{
		printf("Nothing to Delete \n\n");
		return;		
	}
	else 
	{
		printf("Deleting %d \n\n", F->n );
		F=F->next;
	}



}

void displayqueue()
{
	system("clear");

	node *temp;
	temp=F;

	if (F==NULL)
	{
		printf("Nothing to show.\n");
	}
	
	printf("\n");

	for (; temp!=NULL ; temp=temp->next )
	{
		printf("%d ", temp->n );
	}
	printf("\n");

}




void queue()
{
	

	int ch;

	do
	{


	printf("\n\nQUEUE\n\nEnter your choice \n1.Add\n2.Delete\n3.Display\n4.Exit\nChoice - ");
	scanf("%d",&ch);


	switch (ch)
	{
		case 1: add(); break;
		case 2: del(); break;
		case 3: displayqueue(); break;
		case 4: return;
		default: printf("\nINVALID. Try again \n");


	}

	}while(ch!=4);


}





int main()
{
	int ch;

	do
	{

	printf("Choose \n1.Stack\n2.Queue\n3.Exit\nåChoice -");
	scanf("%d",&ch);

	


	switch(ch)
	{
		case 1: stack(); break;
		case 2: queue(); break;
		case 3: return ;
		default : printf("Invalid\n");
	}

	}while(ch!=3);

return 0;
}
