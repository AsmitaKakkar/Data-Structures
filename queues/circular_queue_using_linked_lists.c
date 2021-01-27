//**********IMPLEMENTATION OF CIRCULAR QUEUE USING LINKED LISTS*************


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
	printf("1. Input data in a queue\n");
	printf("2. Delete data from the queue\n");
	printf("3. Display peek value\n");
	printf("4. Display queue status\n");
	printf("5.Exit\n");
}

int enqueue(int data)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	
	new_node->data=data;
	new_node->next=NULL;
	
	if(new_node==NULL)
	{
		printf("Memory does not allocated.....\n");
		return;
	}

	else if(head==NULL && tail==NULL)
	{
		head=tail=new_node;
		tail->next=head;
	
	}
	else
	{
		tail->next=new_node;
		tail=new_node;
		tail->next=head;
	
	}
	printf("%d successfully added to the queue!!\n",data);
	
}

void dequeue()
{
	struct node *new_node;
	new_node=head;
	if(head==NULL && tail==NULL)
	{
		printf("QUEUE is empty!!\n");
		return;
	}
	else if(head==tail)
	{
		head=tail=NULL;
		free(new_node);
		
	}
	else
	{
		printf("%d successfully deleted from the queue!!\n",head->data);
		head=head->next;
		tail->next=head;
		free(new_node);
	}
	
}


void peek()
{
	if(head==NULL && tail==NULL)
	{
		printf("QUEUE is empty!!\n");
		return;
		
	}
	else
	{
		printf("%d is the peek value\n",head->data);
	}
	
}


void display()
{
	struct node *temp;
	if(head==NULL && tail==NULL)
	{
		printf("QUEUE is empty!!\n");
		return;
		
	}
	else
	{
		printf("\t\tQUEUE STATUS\t\t\n");
		for(temp=head;temp<=tail;temp=temp->next)
		{
			printf("%d ",temp->data);
			
		}
		printf("\n");
	}
	
}

int main()
{
	do
	{
		int choice;
		printmenu();
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					int data;
					printf("Enter data:");
					scanf("%d",&data);
					enqueue(data);
					printf("Press any key to continue.....\n");
					getch();
					break;
					
				}
			case 2:
				{
					dequeue();
					printf("Press any key to continue.....\n");
					getch();
					break;
				}
			case 3:
				{
					peek();
					printf("Press any key to cointinue.....\n");
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
					printf("EROOR!! WRONG CHOICE!!\nPlease choose correct option.....\n");
					printf("Press any key to continue....\n");
					getch();
					
				}
		}
	}
	while(1);
}

