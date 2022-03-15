#include<stdio.h>
#include<stdlib.h>

struct Node 
{
   int info;
   struct Node *next;

};struct Node *Head=NULL;   //This is Head node that contain a single NULL pointer at their  address
  


int main()
{

   printf("%d 0x%X",Head,&Head); 
   return EXIT_SUCCESS;

}
