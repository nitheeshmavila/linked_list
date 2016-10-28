#include<stdlib.h>

struct node{
        int data;
        struct node* next;
};

void linktest(void);
struct node* build123(void);

int main()
{
        linktest();
}

struct node *build123(void)
{
        struct node *head=malloc(sizeof(struct node));

        head->data=2;
        head->next=malloc(sizeof(struct node));
        head->next->data=3;
        head->next->next=malloc(sizeof(struct node));
        head->next->next->data=4;
        head->next->next->next=NULL;

        return head;
}
void linktest()
{
        struct node *head;
        struct node *newnode;
        
        head = build123();
        newnode=(struct node *)malloc(sizeof(*newnode));

        newnode->data=1;
        newnode->next=head;
        head=newnode;
}
