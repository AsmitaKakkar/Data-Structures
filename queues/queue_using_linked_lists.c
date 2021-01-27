//*******************IMPLEMENTATION OF QUEUE USING LINKED LISTS**************************


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;


void printmenu()
{
	system("cls");
	printf("\t\tQUEUE MENU\n");
	printf("1. enqueue\n");
	printf("2. dequeue\n");
	printf("3. peek\n");
	printf("4. display\n");
	printf("5. exit\n");
	
}


int enqueue(int x)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=x;
		new_node->next=NULL;
	if(new_node==NULL)
	{
		printf("memory does not assisgned to the pointer!!\n");
		return 0;
	}

	if(head==NULL && tail==NULL)
	{
		head=tail=new_node;
	}
	else
	{
		tail->next=new_node;
		tail=new_node;
	}
	printf("%d successfully added in the queue!!\n",x);
}

void dequeue()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue Underflow!!\n");
		return;
	}
	else
	{
		printf("%d deleted from the queue successfully!!\n",head->data);
		head=head->next;
	}
}
void peek()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue Underflow!!\n",head->data);
		return;
	}
	else
	{
		printf("%d is the peek value.\n",head->data);
	}
}

void display()
{
	printf("\t\tQUEUE STATUS\t\t\n");
	struct node * temp;
	if(head==NULL && tail==NULL)
	{
		printf("Queue is empty!!\n");
		return;	
	}
	else
	{
		temp=head;
		do
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		while(temp!=NULL);
	
	}
		printf("\n");
}

int main()
{
	do
	{
		int choice;
		printmenu();
		printf("Enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					int data;
					printf("Enter data to be added in a queue:");
					scanf("%d",&data);
					enqueue(data);
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 2:
				{
					dequeue();
					printf("Press any key to continue......\n");
					getch();
					break;
					
				}
			case 3:
				{
					peek();
					printf("Press any key to continue.....\n");
					getch();
					break;
				}
			case 4:
				{
					display();
					printf("Press any key to continue....\n");
					getch();
					break;
				}
			case 5:
				{
					exit(1);

				}
			default:
				{
					printf("ERROR!! wrong choice\n please enter correct choice(1-5)\n");
					printf("Press any key to continue.......\n");
					getch();
				}
		}
	}
	while(1);
	
	return 0;
}


