#include "stdio.h"
#include "stdlib.h"
struct node{
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree(){
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
	head = malloc(sizeof (struct node));
	second = malloc(sizeof (struct node));
	third = malloc(sizeof (struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}
void pushOnHead(struct node** headref, int data){
        struct node* newNode = malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = *headref;
        *headref = newNode;
}

void pushOnTail(struct node** ref, int data){
        struct node* newNode = malloc(sizeof(struct node));
        struct node* current = *ref;

        newNode->data = data;
        newNode->next = NULL;
        while (current->next != NULL){
        current =current->next;
        }
        current->next = newNode;
}
void Push(struct node** headref, int data){
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = *headref;
	*headref = newNode;
}

void printList(struct node* head){
        struct node* current = head;
        while (current != NULL) {
#ifdef printAdd
        printf("%d @ %p\n", current->data, current);
#else
        printf("%d  ",current->data);
#endif
        current = current->next;
        }
        printf("\n");
}

void insert(struct node** ref, int target, int data){
        struct node* newNode = malloc(sizeof(struct node));
        struct node* current = *ref;

        while(current->next != NULL){
                if(current->data == target){
                        newNode->next = current->next;
                        current->next = newNode;
                        newNode->data = data;
                        current = newNode->next;
                }
                else current = current->next;
        }
}
	
