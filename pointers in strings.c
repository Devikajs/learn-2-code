#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 char str[100];
    char *p;
    fgets(str,100,stdin);
    p=str;
    while(*p!='\0')
        printf("%c",*p++);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
