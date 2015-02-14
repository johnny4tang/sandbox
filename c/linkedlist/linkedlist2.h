typedef struct Node
{
        int data;
        struct Node* next;
}node;
int append(node* n, int num)
{
        if(n == NULL)
                return 0;
        while(n->next != NULL)
                n = n->next;
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data = num;
        newnode->next = NULL;
        n->next = newnode;
}
node* push(node* n, int num)
{
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data = 0;
        newnode->next = n;
        return newnode;
}
int insert(node* n,int target, int num)
{
        if(n == NULL)
                return 0;
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data = num;
        newnode->next = NULL;
        while(n->next != NULL)
        {
                if(n->data == target)
                {
                        newnode->next = n->next;
                        n->next = newnode;
                }
                n = n->next;
        }
}
int printlist(node* n)
{
        if(n == NULL)
                return 0;
        while(n != NULL)
        {
                printf("%d, ",n->data);
                n = n->next;
        }
        printf("\n");
}
void reversepr(node* n)
{
        if(n == NULL)
                return;
        reversepr(n->next);
        printf("%d, ",n->data);
}
void reverse_3p(node** n)
{
        node* p=NULL;
        node* r = (*n)->next;
        node* q = *n;
        while(q!=NULL)
        {
                r=q->next;
                q->next=p;
                p=q;
                q=r;
        }
        *n = p;
}
node* reverse_recursion(node* m,node* n)
{
        if(n->next == NULL)
        {
                n->next = m;
                return n;
        }
        node* nextn = n->next;
        node* nextm = n;
        n->next = m;
        return reverse_recursion(nextm, nextn);
}

