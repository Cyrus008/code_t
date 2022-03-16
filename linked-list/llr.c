#include<stdio.h>
#include<stdlib.h>

struct Node 
{
   int info;
   struct Node *next;

};struct Node *Head=NULL;
  
struct Node * push_node_in_ll( struct Node **Head_ref,int data)
{
      struct Node*b=*Head_ref;
      struct Node * temp= (struct Node * )malloc(sizeof(struct Node));
            temp->info =data;
            if (*Head_ref == NULL)
            {
               temp->next =*Head_ref;
               *Head_ref = temp;
               return *Head_ref;
            }
            
            while(b->next != NULL)
                        b=b->next;
            temp->next=b->next;
            b->next=temp;
      return *Head_ref;
}


struct Node  *reveser_lls(struct Node **head_ref)
{
     struct Node *prev,*curr,*next;
      next=prev=NULL;
      curr = *head_ref;      //Here curr poiting address of 1st node using curr = start
     while (curr !=NULL)     //Here we are traversing untill curr ==NULL 
     {
         next=curr->next;   //Storing address of next node of linked list in next pointer
         curr->next=prev;   //Here link part of next node pointing address of previous node
         prev=curr;         //Here prev stored the address of next node
         curr = next;       //Here curr poiting address of 2nd node using curr = next = curr->next . This is happen in first iteration
     }
     *head_ref=prev;         // Here prev has NULL value and we storing it in *head_ref
     return *head_ref;
}

void print_node(struct Node *Start)
  {
   int i=0;
   while(Start !=NULL)
     {
          printf(" %d  ",Start->info);
          Start=Start->next;
     }
   printf("\n");
 }
int main()
{
   printf("Liked List is before Reverse->:");
   for(int i=0;i<10;i++)
         push_node_in_ll(&Head,i);
   print_node(Head);
   printf("Liked List is After Reverse->:");
   reveser_lls(&Head);
   print_node(Head);
   printf("\n");
   return EXIT_SUCCESS;

}

