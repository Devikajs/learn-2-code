#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
  int a,sum;
   
do{
    scanf("%d",&a);
  if(a==0){break;}
    sum=sum+a;
    if(sum==a){continue;}
    printf("%d\n",sum);
}while(a>0);
return 0;    

}
