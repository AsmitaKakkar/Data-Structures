//************stack using array*************

/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX_SIZE 10

int top=-1;

int stack[MAX_SIZE];

void printmenu()
{
	system("cls");
	
	printf("/t/t**************STACK MENU****************\n\n");
	printf("1. To input data in a stack\n");
	printf("2. To delete data from the stack\n");
	printf("3. To display stack menu\n");
	printf("4. To display peek value of the stack\n");
	printf("5. exit\n");
	
}


int push(int data)
{
	if(top==MAX_SIZE-1)
	{
		printf("STACK is full!!\n");
		return 0;
	}
	else
	{
		top++;
		stack[top]=data;
		printf("%d added to the stack successfully!!\n",data);
		
	}
	
}

void pop()
{
	if(top==-1)
	{
		printf("STACK is empty!!\n");

	}
	else
	{
		printf("%d deleted from the stack successfully!!\n",stack[top]);
		top--;	
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("STACK is empty!!\n");
		
	}
	else
	{
		printf("\t\t**********stack menu**********\n\n");
		
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	
}


void peek()
{
	if(top==-1)
	{
		printf("STACK is empty!!\n");
		
	}
	else
	{
		printf("%d is the peek value!!\n",stack[top]);
	}
	
}


int main()
{
	int choice;
	do
	{
		printmenu();
		printf("Enter choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1	:
				{
					int data;
					printf("Enter data to be inputed in a stack:\n");
					scanf("%d",&data);
					
					push(data);
					
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 2 :
				{
					pop();
					printf("Press any key to continue.....\n");
					getch();
					break;
				}
			case 3:
				{
					display();
					printf("Press any key to continue......\n");
					getch();
					break;
					
			case 4:
				{
					peek();
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 5:
				{
					exit(1);
				}
			default :
				{
					printf("ERROR!! Wrong choice\n Please select between (1-5)\n");
					printf("Press any key to continue.....");
					getch();
					
				}
			}	
		}
	}
	
	while(1);
	
	return 0;
}*/



//************stack using linked lists************

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX_SIZE 10

int top=-1;

struct stack()
{
	int data;
	struct next;
};

struct stack front==NULL;
struct stack rear==NULL;

void printmenu()
{
	system("cls");
	
	printf("/t/t**************STACK MENU****************\n\n");
	printf("1. To input data in a stack\n");
	printf("2. To delete data from the stack\n");
	printf("3. To display stack menu\n");
	printf("4. To display peek value of the stack\n");
	printf("5. exit\n");
	
}

int push(int data)
{
	
}


void pop()
{
	
}


void display()
{
	
}

void peek()
{
	
}


int main()
{
	do
	
	{
		int choice;
	
		printmenu();
	
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				{
					push();
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 2:
				{
					pop();
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 3:
				{
					display();
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 4:
				{
					peek();
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
					printf("ERROR!! Wrong choice!!\nPlease select between (1-5)!!");
					printf("Press any key to continue......\n");
					getch();
					break;
				}
		}
	
	}
	while(1);
	
	return 0;
}
