#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int i;
    float a,b,c;
    
    for(i=1;i<=5;i++)
    {
        scanf("%f%f",&a,&b);
        
        c=(b/a)*100;
        
        if(c>=90)
            printf("S\n");
        else if (c>=85)
            printf("A+\n");
        else if(c>=80)
            printf("A\n");
        else if(c>=75)
            printf("B+\n");
        else if(c>=70)
            printf("B\n");
        else if(c>=65)
            printf("C+\n");
        else if(c>=60)
            printf("C\n");
        else if(c>=55)
            printf("D\n");
        else if(c>=40)
            printf("P\n");
        else if(c<40)
            printf("F\n");
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
