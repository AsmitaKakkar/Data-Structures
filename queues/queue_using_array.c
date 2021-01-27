//*************IMPLEMENTATION OF QUEUE USING ARRAY***********************

/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 10

int front=-1;
int rear =-1;
int queue[MAX];

void printmenu()
{
	system("cls");
	printf("\t\tQUEUE MENU\n");
	printf("1. enqueue\n");
	printf("2. dequeue\n");
	printf("3. peek\n");
	printf("4. display\n");
	
}

int enqueue(int data)
{
if(rear==MAX-1)
{
	printf("QUEUE OVERFLOW!!\n");
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
	rear++;
	queue[rear]=data;
	
}

printf("%d added to the queue successfully!!\n",data);

}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("QUEUE UNDERFLOW!!\n");
		return;
	}
	else
	{
		printf("%d successfully deleted\n",queue[front]);
		front++;
	}
}

void peek()
{
	printf("%d is the peek value\n",queue[front]);
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("QUEUE UNDERFLOW!!\n");
		return;
	}
	else
	{
		printf("\t\tQUEUE STATUS\t\t\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
		
	}
}

int main()
{
	int choice;
	do
	{
		printmenu();
		printf("Enter choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				{
					int data;
					printf("Enter data");
					scanf("%d",&data);
					enqueue(data);
					printf("Press any key to continue.....\n");
					getch();
					break;
				}
			case 2:
				{
					dequeue();
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 3:
				{
					peek();
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 4:
				{
					display();
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 5:
				{
					exit(1);
		
				}
			default:
				{
					printf("ERROR!! \n Please enter correct choice(1-5)\n");
					printf("Press any key to continue......\n");
					getch();
				}
		}
	}
	while(1);
		
	return 0;
}*/

