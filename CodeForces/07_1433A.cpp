/*
    Problem Code- 1433A
    Problem Name- Boring Apartments
    Problem Link- https://codeforces.com/problemset/problem/1433/A
    Description- The first line of the input contains one integer t(1≤t≤36) — the number of test cases. The only line of the 
    test case contains one integer x(1≤x≤9999) — the apartment number of the resident who answered the call. It is guaranteed 
    that x consists of the same digit.
*/
#include <iostream>
using namespace std;
int main(){
    int t, x, ans, mod;
    cin >> t;
    while (t--){
        ans = 0;
        cin >> x;
        mod = x % 10;
        while(x > 0){
            ans++;
            x /= 10;
        }
        cout << (mod - 1)*10 + ans * (ans + 1) / 2 << endl;
    }
    return 0;
}