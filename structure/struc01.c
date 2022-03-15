#include<stdio.h>
#include<stdlib.h>

struct Node 
{
   int info;
   struct Node *next;           //This is structure template

};
struct Node *Head=NULL;        // Here we initalized structure varaible with NULL value that is know as Head node in Linkedlist 
  


int main()
{

   printf("%d 0x%X",Head,&Head); //Here i print contain of head node
   return EXIT_SUCCESS;

}
