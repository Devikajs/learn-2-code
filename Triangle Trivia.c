#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,b,c;
            scanf("%d%d%d\n",&a,&b,&c);
            if(a==b&&b==c)
            {printf("Equilateral Triangle\n");
            }
            else if (a==b||a==c||b==c)
            {printf("Isosceles Triangle\n");
            }
            else
            {
                printf("Scalene Triangle\n");
            }
   
    return 0;
}
