/* About Code :
 *              This code is written for ratating desired element from left to write This is very short and easy
 * Author     : Pramod Kumar Maurya
 * Complexity :  
 *              Time Complexity :O(n)
 *              Space Complexity:O(1)
 * Date       : 23/11/2019            
 **/

#include<stdio.h>
#include<stdlib.h>

int* Array_Roation(int *a,int len,int shift_element)
{
    int temp; 
    while(shift_element--)
         {
                temp =a[0];                       //This produced wrong illusion it will store 0,1...d element
                 for(int k=0; k<len; k++)
                      a[k]=a[k+1];               
                a[len-1]=temp;             //Here we are updating the array last element at end of rotation
         }                   
       return a;
}

int main()
{
   int X[] ={1,4,6,7,9,8,5},d=7;
   int len = sizeof(X)/sizeof(X[0]);
   Array_Roation(X,len,d); 
      for(int x=0;x<len;x++) 
              printf("%d ",*(X+x));
              printf("\n");
 
    return EXIT_SUCCESS ;
}
