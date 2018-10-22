#include <stdio.h>
#include <stdlib.h>


struct queue
{
	int n;
	struct node *next;

}*F=NULL,*R=NULL;

typedef struct queue node;

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

void display()
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




int main()
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
		case 3: display(); break;
		case 4: return;
		default: printf("\nINVALID. Try again \n");


	}

	}while(ch!=4);

return 0;
}