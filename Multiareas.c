#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d\n",&n);
    char c;
    float s,area;
    float a,b;
    float ar[n];
    switch(n){
        case 3:
            for(i=0;i<n;i++){
                scanf("%f",&ar[i]);
            }
            s=(ar[0]+ar[1]+ar[2])/2;
            area=sqrt(s*(s-ar[0])*(s-ar[1])*(s-ar[2]));
                break;
        case 4:
            scanf("%c\n",&c);
            if(c=='s'||c=='S'){
                scanf("%f",&a);
                area=a*a;
                
            }else{
                scanf("%f\n%f",&a,&b);
                area=a*b;
            }
            break;
            default:
            area=1;
            
            
            
    }
printf("%0.1f",area);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
