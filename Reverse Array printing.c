#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[50],n,i,l;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&l);
    for (i=0;i<l;i++)
      {
        scanf("%d",&n);
        a[i]=n;
    }
    for(i=l-1;i>=0;i--)
    {
     printf("%d\n",a[i]);
    }
           
    return 0;
}
