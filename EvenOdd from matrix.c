#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,i,j,odd=0,even=0;
    scanf("%d%d",&m,&n);
    int ar[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
        }
    }
      for(i=0;i<m;i++){
          for(j=0;j<n;j++){
            if(ar[i][j]%2==0)
                even++;
              else
                  odd++;
          }
      }
    printf("%d\n",odd);
    printf("%d",even);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
