#include<stdio.h>
#include<stdlib.h>
#include"linkedlist2.h"

int listlen(node* n)
{
	int count;
	while(n->next != NULL)
	{
		count++;
		n = n->next;
	}
	return count;
}
node* sort_insert_helper(node* head, node* target)
{
	node* H = head;
	node* tmp;
	if(target->data <= head->data)
	{
		target->next = head;
		return target;
	}
	else
	{
		while(head->next != NULL)
		{
			if(head->next->data <= target->data)
			{	
				printf("move %d over %d\n", target->data,head->next->data);
				head = head->next;
				continue;
			}
			else
			{
				printf("found: %d > %d\n",head->next->data,target->data);
				target->next = head->next;
				head->next = target;
				break;
			}
		}
		if(head->next == NULL)
		{
			head->next = target;
			target->next = NULL;
		}
		return H;
	}
}
node* sort_insert(node* m)
{
	int l,i;
	node* todohead;
	node* p;
	node* head = m;
	p = m->next;
	todohead = p->next;
	if(m->data > p->data)
	{
		p->next = m;
		m->next = NULL;
		head = p;
	}	
	else
	{
		p->next = NULL;
	}
	printf("step: ");
	printlist(head);
	while(todohead != NULL)
	{
	      p = todohead;
	      todohead = todohead->next;
		head = sort_insert_helper(head,p);
	      printf("step: ");
	      printlist(head);
	}
	//printf("todohead: ");
	//printlist(todohead);
	return head;	
}
int main()
{
	node* head = (node*)malloc(sizeof(node));
	head->data = 3;
	head->next = NULL;
	append(head, 7);
	append(head, 8);
	append(head, 1);
	append(head, 9);
	append(head, 2);
	append(head, 4);
	
	//head->data = 5;
	//head->next = NULL;
	//append(head, 2);
	//append(head, 4);
	//append(head, 3);
	//append(head, 1);
	
	//head = push(head, 0);
	//insert(head,3,99);
	printlist(head);
	//printf("length:%d\n",listlen(head));
	//reverse_3p(&head);
	//tmp = reverse_recursion(NULL, head);
	//printlist(reverse_recursion(NULL, head));
	printlist(sort_insert(head));	
	//reversepr(head);
	//printf("\n");
}
