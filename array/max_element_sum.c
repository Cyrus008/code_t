/**
 * @file array_ds.c
 * @author Pramod Maurya (pramod.nexgen@g)
 * @brief :WAP.Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
 *         This code contain Time complexity O(n^2)
 * @date  2020-01-23 
 * 
 */

#include <stdio.h>
#include<stdlib.h>

int * array_rotation(int *A,int N)
{
  int i,j,B=A[0];
       for(j=0;j<N-1;j++)
              A[j] = A[j+1];
 		A[N-1]=B;
  		return A;
}
int findmax(int *B,int N,int X)
{
      for(int i=1;i<N;i++)
	     {
	         if(X < B[i])
			       X=B[i];
	} 
   return X;
}
int main() 
{ 
	int A[] = {1, 20, 2, 10},i,j;  
	int alen = sizeof(A)/sizeof(A[0]);
	int temp[alen],sum;
	for(j=0;j<alen;j++)
	{
		sum=0;
		for(i=0;i<alen;i++)
	         	sum=sum+i*A[i]; 
	    temp[j]=sum; 
	    array_rotation(A,alen);
	}
	int MAX=temp[0];
	printf("Required Result:%d\n",findmax(temp,alen,MAX));
	return EXIT_SUCCESS; 
} 

