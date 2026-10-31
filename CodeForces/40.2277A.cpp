#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while(a--){
        int n, k;
        cin >> n >> k;
        vector<int> freq(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) {
                freq[x]++;
            }
        }

        int answer = 0;
        int sum = 0;

        for (int m = 0; m <= n; m++) {
            sum += freq[m];
            if (sum < (m + 1) * k) {
                break;
            }
            answer = m + 1;
        }

        cout << answer << endl;
    }
    return 0;
}




