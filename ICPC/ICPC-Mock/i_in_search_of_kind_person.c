#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        long long arr[N], pre[N], suf[N];

        for (int i = 0; i < N; i++){
            scanf("%lld", &arr[i]);
        }
        pre[0] = 0; 
        for (int i = 1; i < N; i++){
            pre[i] = (arr[i-1] > pre[i-1]) ? arr[i-1] : pre[i-1];
        }
        suf[N-1] = LLONG_MAX; 
        for (int i = N-2; i >= 0; i--){
            suf[i] = (arr[i+1] < suf[i+1]) ? arr[i+1] : suf[i+1];
        }
        int ans = -1;
        for (int i = 0; i < N; i++) {
            if (arr[i] > pre[i] && arr[i] < suf[i]) {
                ans = i + 1;
                break;
            }
        }

        printf("Case %d: ", t);
        if (ans == -1) printf("Humanity is doomed!\n");
        else printf("%d\n", ans);
    }
    return 0;
}
