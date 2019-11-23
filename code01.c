#include<stdio.h>
#include<stdlib.h>

int* temp_buffering(int *array,int d,int *temp)
{
   int i=0;
   while (i<d)
   {
       temp[i]=array[i];
       i++;
       }
   return temp;
}

int* A_rot_fun(int *array,int len)
{
  int d=2,temp[2];
  temp_buffering(array,d,temp);
  for(int i=0;i<d;i++)
    {
      for(int j=0;j<len;j++)
      array[j]=array[j+1];
    }
                 array[4] = temp[0]; 
                 array[5] = temp[1];
  return array;
}



int main()
{
   int X[] ={1,4,6,7,9,8};
   int len = sizeof(X)/sizeof(X[0]);
   A_rot_fun(X,len); 
   for(int x=0;x<len;x++) 
            printf("%d ",*(X+x));
            printf("\n");  
   return EXIT_SUCCESS ;
}
