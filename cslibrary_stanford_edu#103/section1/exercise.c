/*      Write the code with the smallest number of assignments (=) which will build the
 *      above memory structure. A: It requires 3 calls to malloc(). 3 int assignments (=) to setup
 *      the ints. 4 pointer assignments to setup head and the 3 next fields. With a little cleverness
 *      and knowledge of the C language, this can all be done with 7 assignment operations (=).
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node* next;
};

struct node* build123(void);

int main()
{
        build123();

}

struct node* build123(void)
{
        struct node *head;

        head= (struct node*)malloc(sizeof(struct node));
        head->data=1;
        head->next=(struct node*)malloc(sizeof(struct node));
        head->next->data=2;
        head->next->next=(struct node*)malloc(sizeof(struct node));
        head->next->next->data=3;
        head->next->next->next=NULL;

        return head;
}
