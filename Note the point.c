#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int x,y,sum;
    scanf("%d%d",&x,&y);
    int *p = &x;
    int *q = &y;
    sum = *p + *q;
    printf("Sum is %d",sum);


         

 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
