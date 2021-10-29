#include<stdio.h>
#define   ARRAY_LENGTH      5   
int main()
{
  int A[ARRAY_LENGTH],temp;
  for(int i=0 ;i<ARRAY_LENGTH;i++)
        scanf("%d",&A[i]);
       temp =A[0];
  for(int i=0;i<ARRAY_LENGTH/2;i++)
        {
            A[i]^=A[ARRAY_LENGTH-i-1];
            A[ARRAY_LENGTH-i-1]^=A[i];               //Reversing using the Bitwise
            A[i]^=A[ARRAY_LENGTH-i-1];

        }
        A[ARRAY_LENGTH-1]=temp;
     for(int i=0;i<ARRAY_LENGTH;i++)
        printf("%d ",A[i]);
 printf("\n");

}
