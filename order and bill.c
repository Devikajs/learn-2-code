#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   int n,a,i;
    float s=0,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  scanf("%d\n",&a);
    switch(a)
    {
            case 1:
            s=s+15;
            break;
        case 2:
            s=s+5;
            break;
        case 3:
            s=s+10;
            break;
        case 4:
            s=s+76;
            break;
        case 5:
            s=s+118.75;
            break;
        case 6:
            s=s+100;
            break;
        case 7:
            s=s+60;
            break;
            
    }
}
f=s+(s*0.02);
printf("%.3f",s);
printf("\n%.3f",f);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
