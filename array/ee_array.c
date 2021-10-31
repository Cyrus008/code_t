/**
 * @problom_statement: Wap that insert an element in an array at a specific index by moving element to the write .
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LENGTH   7
int * insert_item_index(int *A,int len,int index,int data);
int main() {

        int A[ARRAY_LENGTH] = {1,3,2,4,5,3},index=3,data=9;
        insert_item_index(A,ARRAY_LENGTH,index,data);
        printf("The Modified array:\n");
        for (int i=0;i< ARRAY_LENGTH;i++) 
                printf("%d ",A[i]);
        printf("\n");
        return EXIT_SUCCESS;
}

int * insert_item_index(int *A,int len,int index,int data){

        for (int i=len-1;i>=index;i--)
                A[i+1] =A[i];
        A[index]=data;
        return A;
}
