#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,s,i;
    scanf("%d",&a);
    if(a%2==0)
    {
        for(i=1;i<=2;i++,a=s)
            s=(a*a)+2;
    }
        else
        {
           for(i=1;i<=3;a=s,i++)
               s=(a*a)+3;
            
        }
    
    
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
