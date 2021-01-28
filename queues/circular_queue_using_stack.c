//************IMPLEMENTATION OF CIRCULAR QUEUE USING STACK*****************


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void printmenu()
{
	system("cls");
	printf("\t\t\tSTACK MENU\t\t\t\n");
	printf("1. Inserting data in a queue\n ");
	printf("2. Deleting data from the queue\n");
	printf("3. Displaying peek value\n");
	printf("4. Displaying queue status\n");
	
}

int enqueue(int data)
{
	printf("We insert data in a queue here!!\n");
	
}

void dequeue()
{
	printf("We delete data from the queue here!!\n");
	
}

void peek()
{
	printf("We display peek value of the queue here!!\n");
	
}

void display()
{
	printf("We display queue status here!!\n");
	
}

int main()
{
	do
	{
		int choice;
		printmenu();
		printf("Enter choice:");
		scanf("%d",&choice);
		{
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
						printf("Press any key to continue....\n");
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
						printf("ERROR!! WRONG CHOICE!!\nPlease enter correct choice(1-5)\n");
						printf("Press any key to continue....\n");
						getch();
						
					}
			}
		}	
	}
	while(1);
	
	return 0;
}
