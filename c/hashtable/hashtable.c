#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

struct node {
       char *data;
       struct node *next;
};

struct node *hashtable[TABLE_SIZE]; /* Our hash table */


struct node *hashtable_alloc(void);
void hashtable_init(void);
unsigned int hash_gen(char *string);
void hashtable_add(char *data);
void hashtable_list(void);
void hashtable_free(void);

int main(void)
{
	hashtable_init();

	hashtable_add("David");
	hashtable_add("Goliath");
	hashtable_add("Alan");

	hashtable_list();
	
	hashtable_free();

	return EXIT_SUCCESS;
}

void hashtable_list(void)
{
	int x = 0;
	struct node *tmp;

	for(x = 0; x < TABLE_SIZE; x++) {
	
		for(tmp = hashtable[x]; tmp != NULL; tmp = tmp->next) {
			if(tmp->data != 0) {
		                printf("Index is %d, Data is %s\n", x, 
							     tmp->data);
			}
		}

	}
}

void hashtable_add(char *data)
{
	unsigned int x = hash_gen(data);
	struct node *tmp;
	char *strdup(const char *s);

	/* Our first loop checks to see the data doesn't already exist */

	for(tmp = hashtable[x]; tmp != NULL; tmp = tmp->next) {

		if(tmp->data != 0) { /* for our root node */

			if(!strcmp(data, tmp->data))
					 return;
		}
	}

	for(tmp = hashtable[x]; tmp->next != NULL; tmp = tmp->next);

	if(tmp->next == NULL) { 
		     tmp->next = hashtable_alloc();
		     tmp = tmp->next;
		     tmp->data = strdup(data);
		     tmp->next = NULL;
	} else
		exit(EXIT_FAILURE); 
}

unsigned int hash_gen(char *string)
{
	unsigned int num = 0;

	while(*string++ != '\0')
			num += *string;

	return num % TABLE_SIZE;
}

void hashtable_init(void)
{
	int x;

	for(x = 0; x <TABLE_SIZE; x++) {
	      hashtable[x] = hashtable_alloc();
	}

}

struct node *hashtable_alloc(void)
{
	struct node *tmp = calloc(1, sizeof(struct node));
	if(tmp == NULL) {
	       fprintf(stderr, "Error: calloc()\n");
	       exit(EXIT_FAILURE);
	}
	
	tmp->next = NULL;	

	return tmp;       
}

void hashtable_free(void)
{
	struct node *tmp;
	struct node *fwd;
	int x;

	for(x = 0; x < TABLE_SIZE; x++) {

	      tmp = hashtable[x];
	      while(tmp != NULL) {
	              fwd = tmp->next;
		      free(tmp->data);
		      free(tmp);
		      tmp = fwd;

	      }
	}
}
