//****************STACK USING LINKED LISTS****************


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX_SIZE 10

struct node
{
	int info;
	struct node* next;
	struct node* prev;
};

struct node* head=NULL;
struct node* tail=NULL;

void printdata()
{
	system("cls");
	
	
	printf("Stack Menu......\n");
	printf("1. add new stack\n");
	printf("2. pop out stack\n");
	printf("3. display stack\n");
	printf("4. exit\n");
	printf("Enter choice:");
	
}

int push(int data)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	
	if(isoverflow(ptr))
	{
		printf("Stack Overflow...\n");
		
		return 0;
	}
	else
	{
		ptr->info=data;
		ptr->next=NULL;
		ptr->prev=NULL;
		
		if(head==NULL)
		{
			head=tail=ptr;
		}
		else
		{
			ptr->prev=tail;
			tail->next=ptr;
			tail=ptr;
		}
	}
	return 1;
}


void pop()
{
	if(isunderflow())
	{
		printf("Stack Underflow...\n");
	}
	else
	{
		if(head==tail)
		{
			struct node* save=head;
			head=tail=NULL;
			printf("%d popped out of stack successfully\n",save->info);
			free(save);
		}
		else
		{
			struct node* save=tail;
			tail->prev->next=NULL;
			tail=tail->prev;
			
			printf("%d popped out of stack successfully...\n",save->info);
			
			free(save);
		}
	}
}
int isoverflow(struct node *ptr)
{
	return (ptr==NULL);
}

int isunderflow()
{
	return (head==NULL);
}

void adddata()
{
	int data;
	printf("Enter data:");
	scanf("%d",&data);
	if(push(data))
	{
		printf("%d pushed to stack successfully\n",data);
		
	}
	else
	{
		printf("%d could not pushed to stack\n",data);
	}
	
	printf("press any key to continue.....\n");
	getch();
	
}

void deletedata()
{
	pop();
	printf("press any key to continue....\n");
	getch();
	
}

void displaydata()
{
	if(isunderflow())
	{
		printf("Stack Underflow....\n");
		
	}
	else
	{
		printf("Stack Status....\n");
		
		struct node* temp=tail;
		while(temp!=NULL)
		{
			printf("%d\n",temp->info);
			temp=temp->prev;
		}
	}
	printf("press any key to continue...\n");
	getch();
	
}


int main()
{
		
	do
	{
	printdata();
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				adddata();
			
				break;
			}
		case 2:
			{
				deletedata();
			
				break;
			}
		case 3:
			{
				displaydata();
				
				break;
			}
		case 4:
			{
				exit(1);
				break;	
			}
		default:
			printf("sorry!! wrong choice.....\n");
			
			getch();
	}
		
	}
	while(1);
	
	return 0;
}





