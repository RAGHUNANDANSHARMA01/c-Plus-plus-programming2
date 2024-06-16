#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	clrscr();
	struct node*next;
}
*front=NULL,*rear=NULL;
void insert(int);
void delete();
void display();
void main()
{
	int value,choice;
	printf("\n""queue implememnt using linked list::\n");
	while(1)
	{
		printf("\n*********MENU*******\n");
		printf("1.insert\n 2.display\n 3.delete\n 4.exit\n");
		printf("enter your chhoce");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the value to be insert:");
			scanf("%d",&value);
			insert(value);
			break;
			case 2:display();
			break;
			case 3:delete();
			break;
			case 4:exit(0);
			default:printf("\nwrong selection!!!! try again!!!!\n");
		}
	}
}			
