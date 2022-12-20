#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
    };
    struct node *head=NULL,*new,*last;
    int choice;
    while(choice)
    {
    	new=(struct node *)malloc(sizeof(struct node));
    	printf("ent data");
    	scanf("%d",&new->data);
    	new->next=NULL;
    	if(head==NULL)
    	head=new;
    	else
    	last->next=new;
    	last=new;
    	printf("Continue ?? (0/1)");
    	scanf("%d",&choice);
    }
    last=head;
    while(last!=NULL)
    {
    	printf("%d",last->data);
    	last=last->next;
    }  
    return 0;  
 }