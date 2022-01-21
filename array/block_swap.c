/**
 * @file block_swap.c
 * @author your name (you@domain.com)
 * @brief :Block swap algorithm for array rotation
 *         Given an array a[] = {0.....n-1}
 * @algoritham:
 *            Initalize the given array into two sub-array A[] ={0..d-1} and B[] ={d...n-1}.
 *            1. Do following until size of A is equal to size of B:
 *              1.1: If A is shorter, divide B into Bl and Br such that Br is of same length as A. Swap A and Br to 
 *                   change ABlBr into BrBlA. Now A is at its final place, so recur on pieces of B.
 *              1.2: If A is longer, divide A into Al and Ar such that Al is of same length as B Swap Al and B to change 
 *                   AlArB into BArAl. Now B is at its final place, so recur on pieces of A. 
 *            2.     Finally when A and B are of equal size, block swap them. 
 * 
 * @date 2022-01-19
 * 
 */
#include <stdio.h>


int * swap(int a[],int fi, int si, int d)
{
    for(int i=0;i<d;i++)
    {
        a[fi+i]^=a[si+i];
        a[si+i]^=a[fi+i];
        a[fi+i]^=a[si+i];
    }
    return a;
}
int* leftRotate(int a[], int d, int len)
{
    if(d == 0 || d == len)
            return 0;
    
    if(len-d == d)             //Here A and B are equal normally swap these two sub array
      {
        swap(a, 0, len-d, d);   //Here we swap d unit from 0 and len-d   
        return 0;
      } 
    if(d < len-d)   // If A is shorter than B sub-array*/
    {
        swap(a, 0, len-d, d);     //Here we swap d unit from 0 and len-d
        leftRotate(a, d, len-d);  //Here we will left rotate len-d array element by d unit
    } 
    else
    {
        swap(a, 0, d, len-d);    
        leftRotate(a+len-d, 2*d-len, d);  //This tricky but perfect
    }
    return a;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr, 6, len);
    for(int i=0;i<7;i++)
      printf("%d ",arr[i]);
    printf("\n");
    return 0 ;
}
