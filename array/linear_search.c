/** @file: code02.c
 * @author:Pramod Maurya
 * @brief : This is About Linear seach or Sequncial  seart
 * @version : 0.1
 * @date : 2019-12-05
 * @copyright Copyright (c) 2019
 */

#include<stdio.h>
#include<stdlib.h>

int Linear_Search(int *A,int len,int data)
 {
  	 int i=0;
   		while(i<len && data !=A[i])
       		i++;
   		if(i<len)
       	        	return i;
  		 else
      		 return 0;
 }
    
int main()
  {
	 int  A[] = {1,3,2,4,6,7,9,5};
	 int len = sizeof(A)/sizeof(A[0]);
	 int data =0,index;
	 index=Linear_Search(A,len,data);
	 index ? printf("Element  position=%d\n",index):printf("Element not found in array\n");
	 return EXIT_SUCCESS; 
 } 

