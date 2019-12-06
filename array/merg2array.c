/**
 * @subject: For the Merging Two sorted array 
 * @author:Pramod Maurya
 * @brief : This is demo explaine Merging Two sorted array 
 * @version : 0.1
 * @date : 2019-12-05
 * @copyright Copyright (c) 2019
 * @algoritham:[Assending Order]
 *     Step :01 
 *          a)Need initalized three variable i=0,j=0,k=0.
 *          b)Compare the i,j with length of A ,B(n1,n2)  and increment these value untile while loop is not breaking
 *            b.1) while[ i<n1 and j<n2]
 *            b.2) Getting smaller value from these two array and stored it in C array and increment counter
 *                 Condition [A[i] > B[j]]
 *                       C[k++]=B[j++]         //Storing value and incresing the counter k,,j
 *                 Condition [A[i] < B[j]] 
 *                       C[k++]=A[j++] 
 *         c)If when the loop break due to false condition then it mean all value from these two array is not merged in array C .So we need to do here:
 *                c.1) while(i<n1)
 *                         C[k++]=A[j++]
 *                c.2) while(i<n2)
 *                         C[k++]=B[j++]         
 *         d) When all merged done then we need return address of the Merged array C
 *               return C;
 * */


#include<stdio.h>
#include<stdlib.h>
int* Merged_call(int *A,int *B,int *C ,int n1,int n2)
   {
 	int i=0,j=0,k=0;
 	while(i<n1 && j<n2 )
  	{
      		if(A[i] > B[j])
                      C[k++]=B[j++];
     		else 
             	     C[k++]=A[i++];
      }
       
       while(i<n1)
	     C[k++]=B[i++]; 
       while(j<n2)
              C[k++]=B[j++]; 
       return C;
}

int main()
 {
 	int  A[] = {5,8,9,28,34},B[]={4,22,25,30,33,40,42};
 	int len_A = sizeof(A)/sizeof(A[0]),len_B=sizeof(B)/sizeof(B[0]);
 	int Merge_C[len_A+len_B];
 	Merged_call(A,B,Merge_C,len_A,len_B);
		 for(int i=0;i<len_A+len_B;i++)
    		    printf("%d ", Merge_C[i]);
         printf("\n");
	 return EXIT_SUCCESS; 
 } 

