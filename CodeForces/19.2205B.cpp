/*
    Problem Code- 2205B
    Problem Name- Simons and Cakes for Success
    Problem Link- https://codeforces.com/contest/2205/problem/B
    Description- Simons has n friends and a huge amount of cakes. To divide the cakes fairly, you are asked to help him solve the following problem:
    Find the minimum positive integer k such that n is a divisor of kn. It can be proved that the answer always exists under the given constraints.
*/
#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin >> n;
    long long k = 1;
    long long temp = n;
    for(long long i = 2; i * i <= temp; i++){
        if(temp % i == 0){
            k *= i;
            while(temp % i == 0) temp /= i;
        }
    }
    if(temp > 1) k *= temp;
    cout << k << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}