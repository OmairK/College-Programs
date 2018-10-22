#include <stdio.h>
#include <stdlib.h>

struct Double_Linked_List
{
	int data;
	struct Double_Linked_List *left, *right;
}*start=NULL;

typedef struct Double_Linked_List node;




void display()
{
	node *temp;
	temp=start;
	printf("\n\n===============\nOutput: ");
	
	for (;temp!=NULL; )
	{
		printf("%d ", temp->data );
		temp=temp->right;
	
	}	

	printf("\n===============\n");


}


void addstart1()
{
	node* newnode;
	int n;
	printf("Enter Value:- ");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	
	newnode->data=n;
	newnode->right=NULL;
	newnode->left=NULL;
	start=newnode;
}



void addstart2()
{
	node* newnode;
	int n;
	printf("Enter Value:- ");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	
	newnode->data=n;

	newnode->right=start;
	newnode->left=NULL;
	start->left=newnode;

	start=newnode;
	
}



void addend()
{
	
	node* temp;
	node *newnode;
	
	temp=start;

	for (; temp->right!=NULL;temp=temp->right);
	
	int n;
	printf("Enter Value:- ");
	scanf("%d", &n);

	newnode=(node *)malloc(sizeof(node));
	newnode->data=n;
	newnode->right=NULL;
	temp->right=newnode;
	newnode->left=temp;
	
}


void addany()
{
		
	int pos;


	printf("\n\nWhere to Enter:- "); scanf("%d", &pos);

	node *temp=start;

	int no;

	for (no = 1; temp->right!=NULL ; no++, temp=temp->right);



	if (pos>no)
	{
		printf("Invalid.\n");
		return;
	}

	if (pos==no)
	{
		addend();
		return;
	}




	node* newnode;
	temp=start;
	int n;
	printf("Enter Value:- ");
	scanf("%d", &n);


	int i;

	for (i = 1; i < pos; ++i)
	{
		temp=temp->right;
	}

	


	newnode=(node *)malloc(sizeof(node));
	
	newnode->data=n;

	newnode->right=temp->right;
	newnode->left=temp;
	
	temp->right->left=newnode;
	
	temp->right=newnode;

	

}



void add()
{
	
	system("clear");

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
	printf("Popping %d \n", start->data );


	start=start->right;
	start->left=NULL;
	free(temp);

}

void delend()
{

	node* temp=start;

	for (; temp->right->right!=NULL; temp=temp->right);

	printf("Popping %d\n", temp->right->data );
	
	free(temp->right);
	temp->right=NULL;



}


void delany()
{
	int pos;

	node* temp=start,*temp1;

	printf("Where do you want to delete :- "); scanf("%d", &pos );

	
	int no;
	for (no = 1; temp->right!=NULL ; no++, temp=temp->right);


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




	int i;

	temp=start;

	for (i = 1; i < pos-1 ; ++i , temp=temp->right);

	printf("Popping %d\n",temp->right->data );
	
	temp1=(temp->right);



	temp->right->right->left=temp;
	temp->right=temp->right->right;

	free(temp1);
}




void delete()
{
	

	system("clear");

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

		

	display();

}








int main(int argc, char const *argv[])
{
	
	int ch;

	do

	{ 
		//display();

		printf("\nDouble Linked List!!\n\n Choose an option \n1.Add \n2.Delete \n3.Display\n4.Exit \n\nChoice - ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: add(); break;
			case 2: delete(); break;
			case 3: display(); break;
			case 4: return;
			default : printf("\n\nINVALID\n"); sleep(3);
		}


	}while(ch!=4);





	return 0;
}	