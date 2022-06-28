#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n){
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}

int main() {
    int n,factorial,i;
    scanf("%d",&n);
    factorial=fact(n);
    printf("%d\n",factorial);
    for(i=1;i<=(n/2);i++){
        if(i*i==n){
            printf("Perfect Square");
            break;
        }
    }
if(i==((n/2)+1)){
    printf("Not Perfect Square");
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
