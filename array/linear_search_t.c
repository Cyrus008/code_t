/**
 * @brief :
 *      There is two method of linear search one is using the while() and another is for() loop
 *       as you needed please used .
*/
#include<stdio.h>
#include<stdlib.h>
int linearSearch(int A[], int N , int data);
int flags =-1;
int main()
{
   int A[] = {1,2,3,4,5,-20,-1}, d= 2 ,index = -1;
   int len = sizeof(A)/sizeof(A[0]); 
   index=linearSearch(A,len,d);
        if(index == -1)
                printf("Element is not found \n");
        else
                printf("Element is  found at index = %d\n",index);
    return EXIT_SUCCESS ;
}

int linearSearch(int A[], int N , int data)
{
#if 0    
    int i=0;
    while(i<N && A[i] !=data)
            i++;
    if(i< N)
            return i ;
    else
            return -1;
#endif  

#if 0 
   // Case 02:
    for (int i=0;i<N;i++)
     {
        if(A[i] == data)
          {
                flags = i;
                break;
          }

        else
                flags=-1;
         
     }
return flags;
#endif
    

}
