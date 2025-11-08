/*
    Problem Code: abc119_a
    Problem Name: Still TBD
    Problem Link: https://atcoder.jp/contests/abc119/tasks/abc119_a
    Description: Given a date in the format YYYY/MM/DD, determine if it falls within the Heisei era (before or on April 30, 2019) or not.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char S[11];
    scanf("%s", S);  
    int year, month, day;
    sscanf(S, "%d/%d/%d", &year, &month, &day);
    if (month < 4) {
        printf("Heisei\n");
    } else if (month == 4 && day <= 30) {
        printf("Heisei\n");
    } else if(year > 2019) {
        printf("TBD\n");
    }else {
        printf("TBD\n");
    }
    return 0;
}