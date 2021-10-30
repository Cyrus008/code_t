#include <stdio.h>
#include <stdlib.h>
 int* max_search(int A[],int N);
int main()
{
    int A[] = {-1,-2,-4,1,2,3,4,5,6,7,9,10,200};
    int len = sizeof(A)/sizeof(A[0]);
    max_search(A,len);
        for(int i=0;i<len;i++)
                printf("%d ",A[i]);
    printf("\n");
    return EXIT_SUCCESS;
}
 int* max_search(int A[],int N)
 {
         int max = 0,temp;
         for(int i = 1; i < N; i++)
         {
                if(A[max] < A[i])
                        max=i;
                
         }
         if(max != 0)
           {
             A[0]^=A[max];
             A[max]^=A[0];
             A[0]^=A[max];
           }    
     return A;         
 }
