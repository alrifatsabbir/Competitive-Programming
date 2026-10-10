/*
    Problem Code: 2259G
    Problem Name: Index Removal
    Problem Link: https://codeforces.com/problemset/problem/2259/G
    Description : An array b1,b2,…,bm is good if, for each i (1≤i<m), bi+1≥bi and bi+1−bi≤k. An array of length 1 is always good.You are given an initially good 
    array a1,a2,…,an. Solve the following problem for each i (1≤i≤n) independently:The i-th element of a is removed, making a=[a1,a2,…,ai−1,ai+1,…,an]. In 
    one operation, you are able to subtract 1 from any element of a. What is the minimum number of operations required to make a good again?
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        
        vector<lll> G(n), H(n);
        G[0] = 0;
        for(int l=1;l<n;l++){
            lll slack = (lll)k - (lll)(a[l]-a[l-1]);
            G[l] = G[l-1] + slack;
        }
        H[0] = G[0];
        for(int j=1;j<n;j++) H[j] = H[j-1] + G[j];
        
        vector<ll> ans(n, 0);
        for(int i=1;i<=n-2;i++){
            ll e = a[i+1]-a[i-1]-k;
            if(e <= 0){
                ans[i] = 0;
                continue;
            }
            lll T = (lll)e + G[i+1];
            int lo = i+1, hi = n-1, pos = n;
            while(lo <= hi){
                int mid = (lo+hi)/2;
                if(G[mid] >= T){
                    pos = mid;
                    hi = mid-1;
                } else {
                    lo = mid+1;
                }
            }
            int r = pos - 1;
            lll sumG = H[r] - H[i];
            lll answer = T * (lll)(r - i) - sumG;
            ans[i] = (ll)answer;
        }
        
        for(int i=0;i<n;i++){
            cout << ans[i];
            if(i+1<n) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}