#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[50],l,n,max=0,min,i;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&n);
        a[i]=n;
        if(a[i]>max)
            max=a[i];
        
    }
    for(i=l-1;i>=0;i--)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("%d\n%d",max,min);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
