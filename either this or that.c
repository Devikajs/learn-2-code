#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
    {
      if((i % 2 == 0) && (i % 3 == 0))
        {
         printf("%d\n",i);   
        }
        else if((i % 2 == 0) && (i % 3 == 0) && (i % 5 == 0))
          
        {
            printf("%d\n",i);
        }     
    }
         
         
