/**
 * @subject: Dynamic Memory Allocation for the 2D array@ method one [using Array Pointer/Pointer to An Array()]  
 * @author:Pramod Maurya
 * @brief :This is demo explaine dynamic Memory Allocation using malloc for 2D array
 * @date : 2019-12-05
 * @algoritham:
 *    malloc : 
 *        The malloc function allocate memory dynamically at the run time in heap memory section.
 *        The  malloc() function allocates size bytes and returns a pointer to the allocated memory.
 *        The number of allocated byte malloc keep as index.That may refer mainly when we free the allocated memory
 *        or realloc the size of dynamic memory
 *
 *   Matrix :The array use the (RxC) matrix where R=Row/C=Colom.For the 2D array RxC=(RxC).
 *         So here we used R and C to represent number of element in array . 
 * 
 *  2D Array representation in pointer :
 *         A[R][C]  =  *(*(A+R)+C)
 *         &A[R][C] =   (*(A+R)+C)
 *  Special: 
 *      int (*A)[ROW]=(int (*)[])malloc(ROW*sizeof(int))  : Allocate the Base address of 2D array 
 * 
 *         
 * */
#include<stdio.h>
#include<stdlib.h>
#define   ROW      3
#define   COL      3
int main()
     {
      int (*A)[ROW]=(int (*)[])malloc(ROW*sizeof(int)); 
 	   for(int i=0;i<ROW;i++)
	     {
     	        for(int j=0;j<COL;j++)
            		scanf("%d",(*(A+i)+j));
            }

	  for(int i=0;i<ROW;i++)
    	   {
       		printf("\n");
	   	for(int j=0;j<COL;j++)
         	   printf("%d ",*(*(A+i)+j));
	    }
      printf("\n");
      return EXIT_SUCCESS; 
} 

