#include<stdio.h>
int main()
{
  int num,A[ARRAY_LENGTH],i;
  scanf("%d",&num);;
  while(num > 0)
   {
       A[i] = num%2;
       num/=2;
       i++;
   }
  
  for(int j=i-1;j>=0;j--)
              printf("%d",A[j]);
  printf("\n");
        return 0 ;
}
