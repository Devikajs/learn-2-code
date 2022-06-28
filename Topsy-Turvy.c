#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int a,b,n,s1=0,s2=0;
    
    float s3;
    scanf("%d",&n);
    for(a=0,b=1;b<=n;b++)
    {
        s1=s1+(a*b);
        s2=s2+(a+b);
        a=b;
    }
    printf("%d\n",s1);
    printf("%d\n",s2);
    s3=s1/s2;
    printf("%.2f",s3);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
