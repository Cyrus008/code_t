/**
 * @file array_ds.c
 * @author Pramod Maurya (pramod.nexgen@gmail.com)
 * @brief :Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
 *         This code contain Time complexity O(n) and space complexity O(1)
 * @date  2020-01-23 
 * 
 */

#include <stdio.h>
#include<stdlib.h>
int main() 
{ 
	int A[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};  
	int alen = sizeof(A)/sizeof(A[0]);
	int sum=0,CurrV=0;
	for(int i=0;i<alen;i++)
	 {
               sum=sum+A[i];
			   CurrV=CurrV+i*A[i]; 
	 }
	int maxVal = CurrV;
    for(int j=1;j<alen;j++)
	    {
	        CurrV=CurrV+sum-alen*A[alen-j];
			(maxVal<CurrV) ? maxVal=CurrV:0 ;
		}
	printf("%d\n",maxVal);
    return EXIT_SUCCESS; 
} 

