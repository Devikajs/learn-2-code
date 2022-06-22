#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a,b,sum,dif,pro,div;
    char operation ;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%s",&operation);
    switch(operation)
    { 
        case('#'):
            sum=a+b;
            printf("%.1lf",sum);
            break;
            
            case('@'):
            dif=b-a;
            printf("%.1lf",dif);
            break;
            
            case('&'):
            pro=a*b;
            printf("%.1lf",pro);
            break;
            
            case('%'):
                if(a==0)
            {
                printf("Not Defined");
                
            }
          
          else
          { 
              div=b/a;
              printf("%.1lf",div);
          }
 break;
        default:
            printf("Error 5: Input Error");
    }
          
          


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
