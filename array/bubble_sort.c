/** @subject: For the bubble short
 * @author:Pramod Maurya
 * @brief : This is demo explaine the bubble short algoritham 
 * @version : 0.1
 * @date : 2019-12-05
 * @copyright Copyright (c) 2019
 * @algoritham:[Assending Order]
 *       Step :01 
 *           a)Compaired two adjacent element in array like a[i] and a[i+1]
 *           b)If you find condtion is true then swap these two adjasent array element
 *               b.1)if(a[i] > a[i+1])
 *               b.2)Swapped these array element and increment counter
 *               b.3)if condition failed then mov to next element without swapping
 *       Step  :02 
 *            When swapping completed then return the swapped element in calling funtion. 
 * */

#include <stdio.h>
#include <stdlib.h>
int * Bubble_sort(int *A, int size);
int main(){

        int A[] = {40,20,50,60,30,10};
        int len = sizeof(A)/sizeof(A[0]);
        Bubble_sort(A,len);
        for (int i=0;i<len;i++)
                printf("%d ",A[i]);
        printf("\n");
        return EXIT_SUCCESS;
}

int * Bubble_sort(int *A, int len)
{
        for(int i=0 ;i<len-1;i++)
        {
                for(int j=0;j<len-1-i;j++)
                if(A[j] > A[j+1])
                {
                  A[j] ^= A[j+1];  
                  A[j+1] ^= A[j];
                  A[j] ^= A[j+1];   
                }
        }
        return A;
}
