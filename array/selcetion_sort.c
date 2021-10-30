/**
 * @selection_sort:
 *      @brief : Wap to sort the element of the 1D array , in assending order using the selection sort. 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int * selection_sort(int *A,int N);
int main()
{
        int A[] = {82,42,49,8,25,52,36,93,59};
        int len = sizeof(A)/sizeof(A[0]);
        selection_sort(A,len);
        for (int i=0;i<len;i++)
                printf("%d ",A[i]);
        printf("\n");
        return EXIT_SUCCESS ;
}

int * selection_sort(int *A,int N)
{
      int min;
      for(int j=0;j<N-1;j++)   //These are number of pass
      {
            min=j;  
            for(int i=j+1;i<N;i++)   //1 2 3
            {
               if(A[min] > A[i])    //index of 8, 25
                    min=i;          
            }       
        if(j != min)   //J and min never same
          {
             A[j]^=A[min];
             A[min]^=A[j];
             A[j]^=A[min];
           }
      } 
        return A;
}
