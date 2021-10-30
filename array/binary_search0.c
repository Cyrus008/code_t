/**
 * @file code.c
 * @brief: This is binary search in a shorted array
 * @alogrithms:
 *             1.take 3 variable  int <low,up,mid>
 *             2.while (low <=up) {
 *             3. Find the mid = (low+up)/2;
 *             5. if (item > A[mid])
 *                           set low = mid+1
 *             6. else if (item < [mid]) 
 *                           set up = mid-1; 
 *             7. else 
 *                           return: mid  ; }
 *             8. if(low>up)
 *                            return -1                        
 * @timecomplexity: 
 *                Worst Case:O(log n). 
 *                Best-Case : O(1)
 */
#include <stdio.h>
#include <stdlib.h>
int binary_search(int A[],int N,int data);
int main()
{
    int A[] = {1,2,3,4,5,6,7,7,8,9},index=0,data=9;
    int len = sizeof(A)/sizeof(A[0]);
    index=binary_search(A,len,data);
    index > 0 ? printf("Element  position=%d\n",index):printf("Element not found in array\n");
    return EXIT_SUCCESS;
}
 int binary_search(int A[],int N,int data)
 {
        int low,up,mid;up =N-1,low =0;           
        while(low<=up) {
                mid=(low+up)/2;
                if(data > A[mid])
                        low=mid+1;
                else if(data < A[mid])
                        up=mid-1;
                else
                        return mid; }
        if(low > up)
                return -1;
 }
