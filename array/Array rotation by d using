/**
 * @file code.c
 * @author pramod Maurya
 * @brief: Shifting  the array element by d unit using the temporary array 
 * @timecomplexity: O(n)
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>


int* shift_stored(int A[],int len,int d)
{
   int B[d],i,count=0;
   for(i=0; i<d; i++)        //Store the first d elements in a temp array B
            B[i]=A[i];
    for(i=d; i<len; i++)      //Shift rest of the array A
        {
            A[i-d] = A[i] ;
            count++;                 
        }  
    for(i=count;i<len;i++)     
            A[i]=B[i-count] ;  //Store back the d elements
    return A;

}

int main()
{
    int A[] = {1,2,3,4,5},d=2;
    int len = sizeof(A)/sizeof(A[0]),i;
    shift_stored(A,len,d);      
    for(i=0; i<len; i++)
        printf("%d ",A[i]);
    printf("\n");  
    return EXIT_SUCCESS;
}

