/**
 * @subject:  Creating a single linked list 
 * @date : 2019-12-05   
 * @operation: This performed the basic linklist creation and printing.
 * */
#include<stdio.h>
#include<stdlib.h>
struct node
        {
            int data;
            struct node *next;
        };

struct node * list_creation(struct node **start,int data)
  {
        struct node *p = (struct node *)malloc(sizeof(struct node ));
              if(!p)
                  printf("Dynamic Memory allocatioi is failed....!!!\n");
               p->data =data;
               p->next =*start;
               *start = p;
        return *start ;
 }

struct node * node_reverser(struct node ** head_ref)
{
    struct node * prev,*ptr,*next;
    prev =NULL;
    ptr  = *head_ref;
      while(ptr !=NULL)
    	    {
        	  next=ptr->next;
          	  ptr->next=prev;
          	  prev=ptr;ptr=next;
        }
       *head_ref = prev; 
	   return *head_ref ;
} 

void print_node(struct node *start)
  {
   while(start !=NULL)
     {
          printf("%d ",start->data);
                  start=start->next;
     }
     printf("\n");
 }

int main()
{

    struct node *start =NULL;
    list_creation(&start,1);   //1->NULL
    list_creation(&start,2);   //1->2->NULL
    list_creation(&start,3);   //1->2->3->NULL
    list_creation(&start,4);   //1->2->3->4->NULL
    list_creation(&start,5);   //1->2->3->4->5NULL
    list_creation(&start,6);   //1->2->3->4->5->6NULL
    print_node(start);
    node_reverser(&start);
    print_node(start);
    free(start);
    return EXIT_SUCCESS;
}

