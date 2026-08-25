// String Palindrome
#include <stdio.h>
#include <string.h>

int main(){
    char s[100], r[100];
    scanf("%s", s);
    
    strcpy(r, s);
    int len = strlen(s);

    for(int i =0; i < len / 2; i++){
        char temp = r[i];
        r[i] = r[len - 1 - i];
        r[len - 1 - i] = temp;
    }
    if(strcmp(s, r) == 0){
        printf("Yes, Palindrome");
    }else{
        printf("No, it's not");
    }
    return 0;
}