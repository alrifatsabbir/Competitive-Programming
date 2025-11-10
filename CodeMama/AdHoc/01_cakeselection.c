/*
    Problem Code: Cake Selection
    Problem Name: Cake Selection
    Problem Link: https://codemama.io/problems/cake-selection
    Description: Given a list of cakes with their weights and prices, select the cake with the highest price-to-weight ratio.
*/

#include <stdio.h>

int main(){
    int W, S, C;
    scanf("%d %d %d", &W, &S, &C);
    int weight = W >= 200 && W <=300;
    int sugar = S >= 50;
    int calories = C >= 150;
    if(weight && sugar && calories){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}