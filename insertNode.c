#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void push(struct Node** head, int newdata)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
}
void insertAfter(struct Node* prev, int newdata)
{
	if(prev==NULL)
		printf("prev node can't be null");
	return;
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=newdata;
	newnode->next=prev->next;
	prev->next=newnode;
}
void append(struct Node** head, int newdata)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	struct Node *last=*head;
	newnode->data=newdata;
	newnode->next=NULL;
	if(*head==NULL)
		*head=newnode;
	return;
	while(last->next != NULL)
		last=last->next;
	last->next=newnode;
	return;
}
void printList(struct Node *node)
{
	while(node != NULL)
	{
		printf("%d",node->data);
		node=node->next;
	}
}
int main()
{
	struct Node* head=NULL;
	append(&head,6);
	push(&head,7);
	push(&head,1);
	append(&head,4);
	insertAfter(head->next,8);
	printf("created list :")
	printList(head);
	return 0;
}