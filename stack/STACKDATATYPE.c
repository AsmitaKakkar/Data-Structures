//*************STACK USING ARRAYS****************

/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define MAXSIZE 10

int top=-1;

int stack[MAXSIZE];

void print_menu()
{
	system ("cls");
	printf("\t\tMAIN MENU\n");
	printf("1. Adding data in a stack\n");
	printf("2. Deleting data from the stack\n");
	printf("3. Display peek value of the stack\n");
	printf("4. Display stack elements\n");
	printf("5. Exit\n");
	
}


int push(int data)
{
	if(top==MAXSIZE-1)
	{
		printf("OOPS!! stack overflow!!\n");
		return 0;
	}
	else
	{
		top++;
		stack[top]=data;
		printf("%d successfully added to the stack!!\n",data);
	}
}

void pop()
{
	printf("%d successfully deleted from the stack!!\n",stack[top]);
	top--;
}

void peek()
{
	printf("%d is the peek value of the stack!!\n",stack[top]);
}

void display()
{
	int i;
	printf("\t\tSTACK MENU\n\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	printf("\n");
}


int main()
{	
	do
	{
		int choice;
		print_menu();
		printf("Select your choice!!\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				int data;
				printf("Enter data you want to add in a stack:");
				scanf("%d",&data);
				
				push(data);
				printf("Press any key to continue.........\n");
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
					peek();
					printf("Press any key to continue......\n");
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
					printf("ERROR!!\n SORRY!!Wrong choice!!\n Please select correct option(1-5)!!\n");
					printf("Press any key to continue......\n");
					getch();
				}
		}			
	}
	
	while(1);
		
	return 0;
}*/




//****************STACK USING LINKED LISTS*******************

/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>


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
	
	printf("\t\tMAIN MENU\n\n\n");
	printf("1. Add new data in the stack\n");
	printf("2. Delete data from the stack\n");
	printf("3. Display peek value of the stack\n");
	printf("4. Display stack menu\n");
	printf("5. exit\n");
	
}


void push(int data)
{
	struct node *newnode;
	newnode=(int *)malloc(sizeof(newnode));
	if(newnode==NULL)
	{
		printf("SORRY!!\nMemory is not allocated!!\n");
		return;
	}
	else
	{
		newnode->data=data;
		newnode->next=head;
		head=newnode;
		printf("%d added to the stack successfully!!\n",data);

	}	
}

void pop()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("STACK IS EMPTY!!\n");
	}
	else
	{
		printf("%d is popped successfully!!\n",temp->data);
		head=temp->next;
		free(temp);
	}
}

void peek()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("STACK IS EMPTY!!\n");
	}
	else
	{
		printf("%d is the peek value of the stack.\n",temp->data);
	}
}

void display()
{
	struct node *temp;
	temp=head;
	if(temp==NULL)
	{
		printf("STACK IS EMPTY!!\n");
	}
	else
	{
		printf("\t\tSTACK MENU\n\n");	
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}


int main()
{
	int choice;
	do
	{
		printmenu();
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					int data;
					printf("Enter data you want to add in the stack:");
					scanf("%d",&data);
					push(data);
					printf("Press any key to continue......\n");
					getch();
					break;
				}
			case 2:
				{
					pop();
					printf("Press any key to continue.........\n");
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
					printf("ERROR!!\n WRONG CHOICE!!\nPlease select correct option(1-5)!!\n");
					printf("Press any key to continue.......\n");
					getch();
				}
		}
	}
	while(1);
	
	return 0;
}*/
