#include<stdio.h>
#include<stdlib.h>

#define GETNTH    1
#define GETNTHFROMEND   1

struct Node 
{ 
    int data; 
    struct Node* next; 
};

void push(struct Node** head_ref,  int new_data) 
{ 
     struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
      new_node->data = new_data;
      new_node->next = (*head_ref); 
      (*head_ref) = new_node; 
} 

#if GETNTHFROMEND
void GetNthFromend(struct Node* head,  int n) 
 {
    int len=0,i;
    struct Node *temp=head;
    while(temp != NULL)
    {
        temp=temp->next;
        len++;
    }
    if(len < n)   //We want search node beyond the length of likelist
           return ;
      temp = head;
      for(int i=1;i<len-n + 1;i++)
    
                temp=temp->next;
                printf("node from end:[%d]\n",temp->data);
      return  ;
 }
#endif

#if GETNTH
int GetNthFromstart(struct Node* head,  int index) 
 {
   struct Node* current = head;
   int count = 0;
   while(current !=NULL)
       {
         if(count == index)  
              return current->data;  
         count++;
         current = current->next;
       }

 }    
#endif 
int main() 
{  
    struct Node* head = NULL;   
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 3);     // Use push() to construct below list  5->4->3->2->1 
    push(&head, 4); 
    push(&head, 5); 
    printf("node from start:[%d]\n",GetNthFromstart(head,3));
    GetNthFromend(head, 4); 
    return EXIT_SUCCESS;
}
