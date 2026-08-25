//Exchange value in two variable without using third variable
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before Swap, A = %d and B = %d \n",  a , b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap, A = %d and B = %d \n",  a , b);
    return 0;
}