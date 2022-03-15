#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}; struct node *head= NULL;

struct node * add_element_ll(struct node **head_ref, int data)
{
    struct node *b = *head_ref;
    struct node *tmp = (struct node *)malloc(sizeof(struct node ));
            if(!tmp)
               {
                     perror("Dynamic Memory allocation is failed ....!!!\n");
                     exit(1);
               }
            tmp->data = data;
            tmp->next = NULL;
            if(*head_ref == NULL)
                {
                     *head_ref=tmp;
                      return *head_ref ;
                }
            while(b->next != NULL)
                        b=b->next;
            b->next=tmp;

    return *head_ref;
}

struct node * push_element_sll(struct node **head_ref, int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node ));
            if(!tmp)
               {
                     perror("Dynamic Memory allocation is failed ....!!!\n");
                     exit(1);
               }
            tmp->data=data;
            tmp->next=*head_ref;
             *head_ref=tmp;
    return *head_ref;
}

struct node * push_element_ell(struct node **head_ref, int data)
{
    struct node *b = *head_ref;
    struct node *tmp = (struct node *)malloc(sizeof(struct node ));
                 tmp->data=data;
            if(!tmp)
               {
                     perror("Dynamic Memory allocation is failed ....!!!\n");
                     exit(1);
               }
            while(b->next != NULL )
                    b=b->next ;
                tmp->next=b->next ;    
                b->next = tmp;
    return *head_ref;
}

void print_node(struct node *start)
  {
   int i=0;
   while(start !=NULL)
     {
          printf("Index[%d] D_Node-> %d A_Node->%p \n",i++,start->data,start->next);
          start=start->next;
     }
 }
int main()
{
    for(int i=0;i<5;i++)
            add_element_ll(&head,i);
    print_node(head);
    printf("\n LL after node insert at  beginning....\n");
    push_element_sll(&head,6);
    print_node(head);
    printf("\n LL after node insert at  end....\n");
    push_element_ell(&head,7);
    print_node(head);
    return EXIT_SUCCESS;
}
