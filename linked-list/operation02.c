#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;  
}   *head = NULL;

void before_node(struct node **start,int item,int data)
{
 struct node *b,*p ;
                p=*start;
    while(p->next != NULL)
        {
          if(p->next->info == item)
           {
               b=(struct node *)malloc(sizeof(struct node));
               b->info=data;
               p->next=b->next;
               b->next=p;
               return ;
           }
           p=p->next ;   
        }
      return ;  
}

void after_node(struct node **start,int item,int data)
{
  struct node *b,*p ;
                p=*start;
  while (p !=NULL)
        {       
            if(p->info == item)
             {
               b=(struct node *)malloc(sizeof(struct node));
               b->info=data;
               b->next=p->next;
               p->next=b;
               return  ;
             }
        p=p->next;
        }
}    

void insert_begning(struct node **start,int data)
{
    struct node *p=*start;
    struct node *b= (struct node *)malloc(sizeof(struct node));
     if (!b)
            printf("Dynamic Memory allocatioi is failed....!!!\n");
            b->info=data;
            b->next=(*start);
            (*start)=b;
}    

void raise_node(struct node **head_ref,int new_data)
{
    struct node *b = *head_ref;
    struct node *p =(struct node *)malloc(sizeof(struct node ));
           if(!p)
                perror("Dynamic Memory allocation is failed ....!!!\n");
           p->info = new_data;
           p->next = NULL;
                if(*head_ref == NULL)
                {
                        *head_ref = p;
                        return ;
                }        
                while(b->next != NULL)
                            b=b->next ;
                b->next=p;
                return ;
}               

void print_node(struct node *start)
  {
   int i=0;
   while(start !=NULL)
     {
          printf("Index[%d] D_Node: %d A_Node :%p \n",i++,start->info,start->next);
          start=start->next;
     }
 }

int main()
  {
        raise_node(&head,20);
        insert_begning(&head,0);
        raise_node(&head,10);
        raise_node(&head,05);
        raise_node(&head,01);
        after_node(&head,10,100);
       // before_node(&head,20,3);
        insert_begning(&head,12);
        print_node(head);
        return EXIT_SUCCESS;
 }
