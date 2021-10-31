/**
 * @problom_statement: Wap that insert an element in an sorted array at the proper place by shifting other elements to the rights .
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LENGTH   7
int * insert_item_index(int *A,int len,int data);
int main() {

        int A[ARRAY_LENGTH] = {2,4,6,9,12,15,50},data=13;
        insert_item_index(A,ARRAY_LENGTH,data);
        printf("The Modified array:\n");
        for (int i=0;i< ARRAY_LENGTH;i++) 
                printf("%d ",A[i]);
        printf("\n");
        return EXIT_SUCCESS;
}

int * insert_item_index(int *A,int len,int data){

        int i;
        for (i=len-1; (data<A[i] && i>=0);i--)  //
                        A[i+1] =A[i];
        A[i+1]=data;
        return A;
}
