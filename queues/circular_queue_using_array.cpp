//*******************IMPLEMENTATION OF CIRCULAR QUEUE USING ARRAY*********************


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 5

int front=-1,rear=-1;
int queue[MAX];

void printmenu()
{
	system("cls");
	printf("\t\t QUEUE MENU\t\t\n");
	printf("1. Enter data in a queue\n");
	printf("2. delete data from the queue\n");
	printf("3. display peek value\n");
	printf("4. display queue value\n");
	printf("5. exit\n");
	
}

int enqueue(int data)
{
	if((rear+1)%MAX==front)
	{
		printf("QUEUE is full!!\n");
		return;
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=data;
	}
	else 
	{
		rear=(rear+1)%MAX;
		queue[rear]=data;
	}
	printf("%d successfully added to the queue\n",data);
	
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is emply!!\n");
	}
	else
	{
		printf("%d is deleted successfully!!\n",queue[front]);
		front=(front+1)%MAX;
	}
	
}

void peek()
{
	if(front==-1 && rear==-1)
	{
		printf("QUEUE is empty!!\n");
		return;
	}
	else
	{
		printf("%d is the peek value\n",queue[front]);
	}
	
}


void display()
{
	if(front==-1 && rear==-1)
	{
		printf("QUEUE is full!!\n");
		return;
	}
	else
	{
		int i;
		printf("\t\tQUEUE STATUS\t\t\n");
		for(i=front;i!=rear;i=(i+1)%MAX)
		{
			printf("%d ",queue[i]);
		}
		printf("%d",queue[rear]);
		
		printf("\n");
	}
	
}

int main()
{
	do
	{
		int choice;
		printmenu();
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
						int data;
						printf("Enter data:");
						scanf("%d",&data);
						enqueue(data);
						printf("Press any key to continue......\n");
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
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 4:
				{
					display();
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 5:
				{
					exit(1);
				}
			default:
				{
					printf("ERROR!!Wrong choice!!\n Please enter correct choice(1-5)\n");
					printf("Press any key to continue.......\n");
					getch();
					
				}
		}	
	}
	while(1);
	
	return 0;
}


