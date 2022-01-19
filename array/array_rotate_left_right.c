/**
 * @file code.c
 * @author your name (you@domain.com)
 * @brief :This programe rotate the array by unit d using left,write,and hole  rotation 
 * @timecomplexity: O(n)
 * @date 2022-01-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

int* reverseArray(int A[], int start,int end) 
{
    while(start < end)   //Here start and end are number of start and end value
    {
        A[start]^=A[end];
        A[end]^=A[start];  //Swapping array element using the bitwise and start and end parameter
        A[start]^=A[end];
        start++,end--;

    }
    return A;

}
int* leftRotate(int A[],int d,int len)
{
    if (d == 0)
             return 0;
    d = d%len;                     //In the case if the rotating factor is greater than array length
    reverseArray(A, 0, d - 1);     //Reverse left array element [0..d-1]. So ArB={2,1,3,4,5,6,7} Here start=0,end=d-1=2
    reverseArray(A, d, len - 1);   //Reverse Right array element [d..n-1].So ArBr={2,1,7,6,5,4,3} Here star=2;end=6
    reverseArray(A, 0, len - 1);   //Reverse Full array element [0..n-1].So (ArBr)r = (3,4,5,6,7,1,2); start=0,end=6
    return A;
    
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 5;
    leftRotate(arr, d, n);
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
