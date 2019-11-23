/* About Code :
 *              This code is written for ratating desired element from left to write
 * Author     : Pramod Kumar Maurya
 * Date       : 23/11/2019            
 **/

#include<stdio.h>
#include<stdlib.h>

int* Temp_buffering(int *array,int shift_element,int *temp)
{
    int i=0;
             while (i<shift_element)
            {
                   temp[i]=array[i];
                   i++;
             }
    return temp;
}

int *Array_swapping(int *array,int len,int shift_element)
{
   for(int i=0;i<shift_element;i++)
          {
            for(int j=0;j<len;j++)
                      array[j]=array[j+1];
          }
    return array;
}

int* Array_Roation(int *array,int len,int shift_element)
{
      int temp[shift_element];
      Temp_buffering(array,shift_element,temp);  
      Array_swapping(array,len,shift_element); 
      for(int i=0;i<shift_element;i++)
         {
            for(int j=shift_element-i;j>0;j--)
                      array[len-j] = temp[i];        
         }   
       return array;
}

int main()
{
   int X[] ={1,4,6,7,9,8,5},d=6;
   int len = sizeof(X)/sizeof(X[0]);
   Array_Roation(X,len,d); 
      for(int x=0;x<len;x++) 
              printf("%d ",*(X+x));
              printf("\n");  
   return EXIT_SUCCESS ;
}
