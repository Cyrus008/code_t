/**
 * @subject: Dynamic Memory Allocation for the 1D array 
 * @author:Pramod Maurya
 * @brief :This is demo explaine dynamic Memory Allocation using malloc 
 * @date : 2019-12-05
 * @algoritham:
 *     malloc : 
 *             The malloc function allocate memory dynamically at the run time in heap memory section.
 *             The malloc() function allocates size bytes and returns a pointer to the allocated memory.
 *             The number of allocated byte malloc keep as index.That may refer mainly when we free the allocated memory
 *             or realloc the size of dynamic memory
 *     Matrix :The array use the (RxC) matrix where R=Row/C=Colom.For the 1D array RxC=(1xC).
 *             So here we used only C to represent number of element in array          
 * */

#include<stdio.h>
#include<stdlib.h>
#define   COL      4
int main()
  {
	 int *A=(int *)malloc(COL*sizeof(int));
	       for(int i=0;i<COL;i++)
          	    scanf("%d",&A[i]);
		
	       for(int i=0;i<COL;i++)
       		    printf("%d ",A[i]);
 	printf("\n");
	return EXIT_SUCCESS; 
  } 

