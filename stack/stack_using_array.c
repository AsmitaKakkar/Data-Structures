//*****************STACK USING ARRAY****************


/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];

int top=-1;

int isunderflow()
{
	return(top==-1);
}

int isoverflow()
{
	return(top==MAX_SIZE-1);
}


int push(int data)
{
	if(isoverflow())
	{
		printf("Stack overflow....\n");
		return 0;
	}
	else
	{
		stack[++top]=data;
		return 1;
	}
}

void pop()
{
	if(isunderflow())
	{
		printf("Stack underflow....\n");
	}
	else
	{
		printf("%d popped out of the stack successfully!!\n",stack[top--]);
	
	}

}

void display()
{
	if(isunderflow())
	{
		printf("Stack underflow...\n");

	}
	else
	{
		int i;
		printf("Stack Status....\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	
}


void printmenu()
{
	
	system ("cls");
	
	printf("Stack Menu.....\n");
	printf("1. add a new stack\n");
	printf("2. pop out a stack\n");
	printf("3. stack status\n");
	printf("4. exit\n");
	printf("Enter your choice:\n");
	
}

void adddata()
{
	
	int data;
	printf("Enter data:");
	scanf("%d",&data);
	
	if(push(data))
	{
		printf("%d pushed to stack sucessfully!!\n",data);
		
	}
	else
	{
		printf("%d does not pushed to stack !!\n",data);
		
	}
	
	printf("Press any key to continue.....\n");
	
	getch();

}

void removedata()
{
	
	pop();
	
	printf("Press any key to continue.....\n");
	
	getch();
	
}

void displaydata()
{
	
	display();
	
	printf("press any key to continue....\n");
	
	getch();
	
}

int main()
{
	int choice;
	
	do
		{
			printmenu();
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					{
						adddata();
						//adding new stack
						break;
					}
				case 2:
					{
						removedata();
						
						//pop out a stack
						break;
					}
				case 3:
					{
						displaydata();
						//displaying stack status
						break;
					}
				case 4:
					{
						//exit
						exit(0);
					}
				default:
					printf("Sorry!! Wrong choice.......\n");
					
					getch();
					
			}
		}
	while(1);

	return 0;
}*/


