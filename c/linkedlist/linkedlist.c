//#include "linkedlist.h"
#include <stdlib.h>
#include<stdio.h>

typedef struct Node
{
	int data;
	struct Node* next;
} node;
int search(node* n, int num)
{
	int index = 1;
	while(n != NULL)
	{
		if(n->data == num)
			return index;
		else
		{
			n = n->next;
			index++;
		}
	}
	return -1;	
}
//void printlist(node* n)
//{
//	while(n != NULL)
//	{
//		printf("%d, ",n->data);
//		n = n->next;
//	}
//	printf("\n");
//}
node* printlist(node* n)
{
	if(n == NULL)
	{
		printf("\n");
		return n;		
	}
	printf("%d, ",n->data);
	printlist(n->next);
}
void insertafter(node* n, node* new, node* target)
{
		while(n != NULL)
		{
			if(n == target->next)
			{
				target->next = new;
				new->next = n;
			}
			else
				n = n->next;
		}
}
void removen(node* n, node* target)
{
	while(n != NULL)
	{
		if(n->next == target)
		{
			n->next = target->next;
		}
		else
			n = n->next;
	}
	free(target);
}
void append(node* n, int num)
{
	node* newnode = (char*)malloc(sizeof(node));
	newnode->data = num;
	newnode->next = NULL;
	while(n ->next != NULL)
		n = n->next;
	n->next = newnode;
}
node* addtop(node* n, int num)
{
	node* newnode = (char*)malloc(sizeof(node));
	newnode->data = num;
	newnode->next = n;
	return newnode;
}
int locator(node* n, int num)
{
	int i = 0;
	for(i=0;i<num-1;i++)
		n = n->next;
	return n->data;
}
node* reverse(node* n)
{
	node* newhead = n;
	int nodecount = 1;
	while(newhead->next != NULL)
	{	
		newhead = newhead->next;
		nodecount++;
	}
	//printf("newhead:%d\n",newhead->data);
	//printf("nodecount:%d\n",nodecount);
	int i;
	for(i=nodecount-1;i>0;i--)
	{
			append(newhead,locator(n,i));
	}
	return newhead;
}
int main()
{
	node* n1 = (node*)malloc(sizeof(node));
	n1->next = NULL;
	n1->data = 11;
	//insertafter(n1,new,n4);
	//removen(n1, n4);
	append(n1,12);
	append(n1,13);
	append(n1,14);
	append(n1,15);
	printlist(n1);	
	printlist(reverse(n1));	
	//printf("%d is at %d\n",14,search(n1,14));
}



