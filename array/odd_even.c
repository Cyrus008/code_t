/**
 *    num =29
 * int i=0 ;
 * while(num !=0)
 * {
 *     arr[i]  =num%2;    14
 *     num/=num;    1v
 */

#define ARRAY_LENGTH   5
#include<stdio.h>
int arrayas_argument(int *X);
int main()
{
  int A[ARRAY_LENGTH];
  for(int i=0;i<ARRAY_LENGTH;i++)
                scanf("%d",&A[i]); 
                
arrayas_argument(A);
return 0 ;
}

int arrayas_argument(int X[])
{
    for(int i=0 ;i<ARRAY_LENGTH;i++)
    if(X[i]%2 == 0)
         printf("X=%d is even \n",X[i]);
    else 
         printf("X=%d is Odd\n",X[i]);

}
