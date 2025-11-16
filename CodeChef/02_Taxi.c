#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d", &n);
    while(n--){
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%d\n", N*5+M*7);
    }
    return 0;
}