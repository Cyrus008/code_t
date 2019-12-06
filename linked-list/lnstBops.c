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

void print_node(struct node *start)
  {
   int i=0;
   while(start !=NULL)
     {
          printf("Index[%d] D_Node: %d A_Node :%p \n",i++,start->data,start->next);
          start=start->next;
     }
 }

int main()
{

    struct node *start =NULL; 
    list_creation(&start,21);   //21->NULL
    list_creation(&start,12);   //21->12->NULL
    list_creation(&start,13);   //21->12->13->NULL
    list_creation(&start,31);   //21->12->13->31->NULL
    print_node(start);
    free(start);
    return EXIT_SUCCESS;
}
