#include <stdio.h>
int main() {
    char st[100], ele;
    int count = 0;
   //scanf("%s",st);
   fgets(st, sizeof(st), stdin);
  

    
    scanf("%c", &ele);

    for (int i = 0; st[i] != '\0'; ++i) {
        if (ele == st[i])
            count++;
    }
    
    count!=0?printf("%d",count):printf("Element not present.");
    
    return 0;
}
