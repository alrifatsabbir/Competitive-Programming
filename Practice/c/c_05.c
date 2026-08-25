// Concat string 
#include <stdio.h>
#include <string.h>

int main(){
    char s[200], n[100];
    scanf("%s", s);
    scanf("%s", n);

    strcat(s, n);
    printf("%s\n", s);
    return 0;
}