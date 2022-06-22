#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,a,i,m,flag=0;
            scanf("%d\n",&n);
            a=n/2;
            scanf("%d\n",&a);
            m=a/2;
            for( i=2;i<=m;i++)
            { 
                if(a%i==0)
             {
               printf("Number is not prime");
                    flag=1;
               break;
              }
             }
            if(flag==0)
             printf("Number is prime");
                    
            
     
            
                  
             
              
                   
                 
                 
             
           
             
                    
                

    
    return 0;
}
