/*
    Problem Code: Number To String
    Problem Name: Number To String
    Problem Link: https://codemama.io/problems/number-to-string
    Description: Write a program to convert number into string. The program will print every digit of the number as a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int i;
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '0') {
            printf("zero ");
        } else if (s[i] == '1') {
            printf("one ");
        } else if (s[i] == '2') {
            printf("two ");
        } else if (s[i] == '3') {
            printf("three ");
        } else if (s[i] == '4') {
            printf("four ");
        } else if (s[i] == '5') {
            printf("five ");
        } else if (s[i] == '6') {
            printf("six ");
        } else if (s[i] == '7') {
            printf("seven ");
        } else if (s[i] == '8') {
            printf("eight ");
        } else if (s[i] == '9') {
            printf("nine ");
        }
    }

    return 0;
}
