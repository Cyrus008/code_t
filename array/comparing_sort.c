/**
 * @comparing_sort:
 *      @brief : Wap that scan a one-diamentional array from left to right and compare all adjacent elements any
 *               two adjacent elements arr[i] and arr[i+1] should be exchange if arr[i] is greater that arr[i+1].
 *               This procedure  will always place the biggest element at the last position.Count the total number of 
 *               exchange done. 
 */
#include <stdio.h>
#include <stdlib.h>
int vcount = 0;
int  comparing_sorting_max(int *A,int len);
int main(){
        int A[] = {82,42,49,8,25,52,36,93,59,10,20};
        int n  = sizeof(A) / sizeof(A[0]);
        printf("\n");
        printf("Number of Counts=%d \n",comparing_sorting_max(A,n));
         printf("The modified array ->\n");
        for (int i=0 ;i<n;i++)
                printf("%d ",A[i]);
        printf("\n\n");

        return 0;
}

int  comparing_sorting_max(int *A,int len) {
        for(int i=1;i<len-1;i++){
                if(A[i] > A [i+1])
                { 
                     A[i]^= A[i+1];
                     A[i+1]  ^= A[i];
                     A[i] ^= A[i+1];
                     vcount++;
                }
           }
       return vcount; 
}

