#include<stdlib.h>
#include<stdio.h>

struct node{
        int data;
        struct node* next;
};

int length(struct node*);
struct node* build123(void);

int main()
{       
        int len;
        struct node* head;
        
        head = build123();        
        len = length(head);
        printf("length is :%d\n",len);
}
struct node* build123(void)
{
        struct node* head=malloc(sizeof(struct node));

        head->data=2;
        head->next=malloc(sizeof(struct node));
        head->next->data=3;
        head->next->next=malloc(sizeof(struct node));
        head->next->next->data=4;
        head->next->next->next=NULL;

        return head;
}

int length(struct node *head)
{
        int len=0;

        while(head!=NULL){
                len++;
                head=head->next;
        }

        return len;
}

