#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{ 
    if(n>0){
        return n*fact(n-1);
        
    }
else{
    return 1;
}
    
}
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",fact(ar[i]));
    }



    return 0;
}
