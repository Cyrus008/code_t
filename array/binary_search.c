/** @file: code02.c
 * @author:Pramod Maurya
 * @brief : This is demo explane about binary search that follow these steps:
 *          Step :01
 *                  Here we refrencing low(Lower limit:Index 0),UP(Upper limit:Index:m-1),mid to find meridian of given array.
 *          Step :02
 *                  Find out the mid of given array using mid=(low+up)/2 and we will check the given item is less that arr[mid] or not and divide array in two half
 *                  like this :  arr[low]  arr[1]  arr[2]....... arr[m-1]  arr[m] ...arr[m+1]  arr[m+2]  arr[0]....... arr[up].
 *                  I will check like the:
 *                   initalized low=0,up=size-1;mid;
 *                   while(low<=up)[
 *                   1. Find the meridian   m  = (low+up)/2
 *                   2. Check the search item is less than or greter than arr[mid] 
 *                          if(data<arr[mid]) 
 *                               low = mid+1 ;  //The search will resume on right half which is arr[m+1]  arr[m+2]  arr[0]....... arr[up].
 *                           else if(data > arr[mid])
 *                               up = mid -1 ; //The search will resume on left half which is arr[low]  arr[1]  arr[2]....... arr[m-1]
 *                                     else (data == arr[mid])     //The search item found successfully
 *                                     ]
 *                           if(low> up)     //The item is not found
 *                       return -1 ;
 * @version : 0.1
 * @date : 2019-12-05
 * @copyright Copyright (c) 2019
 */

#include<stdio.h>
#include<stdlib.h>

int Binary_Search(int *A,int len,int data)
  {
  	 int low=0,up=len-1,mid;
  		 while (low<=up)
   		 {
      		    mid =(low+up)/2;
      			if(data > A[mid])
            			low=mid+1;
      			else if (data <A[mid])
           			up=mid-1;
      			 else 
            			return mid;
   		}
       	return -1 ;
  }
    
int main()
   {
	int  A[] = {1,3,2,4,6,7,9,5};
	int len = sizeof(A)/sizeof(A[0]);
	int data=55,index;
 	index=Binary_Search(A,len,data);
 	index ? printf("Element  position=%d\n",index):printf("Element not found in array\n");
	return EXIT_SUCCESS; 
 } 

