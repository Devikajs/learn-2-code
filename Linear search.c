#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,n,s,p,a[50],i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&l);
    printf("Enter the array elements:\n");
    for(i=0;i<l;i++)
    {
        
        scanf("%d",&n);
        a[i]=n;
        
    }
    printf("Enter the element to be searched:\n");
        scanf("%d",&s);
    for(i=l-1;i>=0;i--)
    {
        if(a[i]==s)
            p=i+1;
    }
printf("Location is :\n%d",p);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
