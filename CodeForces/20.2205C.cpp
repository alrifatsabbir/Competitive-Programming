/*
    Problem Code- 2205C
    Problem Name- Simons and Posting Blogs
    Problem Link- https://codeforces.com/contest/2205/problem/C
    Description- There are n blogs. The i-th blog mentioned li users in order as an array ai=[ai,1,ai,2,…,ai,li]. You are going to post all n 
    blogs. Let us maintain a sequence Q that describes the list of users you have recently mentioned. You need to perform the following operation 
    exactly n times:
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++){
        int l; cin >> l;
        a[i].resize(l);
        for(auto& x : a[i]) cin >> x;
    }
    
    vector<vector<int>> cur = a;
    vector<bool> used(n, false);
    vector<int> pickedLast;
    
    for(int round = 0; round < n; round++){
        int best = -1;
        vector<int> bestFront;
        
        for(int i = 0; i < n; i++){
            if(used[i]) continue;
            vector<int> f;
            set<int> seen;
            for(int j = (int)cur[i].size()-1; j >= 0; j--)
                if(seen.insert(cur[i][j]).second) f.push_back(cur[i][j]);
            if(best == -1 || f < bestFront){
                best = i;
                bestFront = f;
            }
        }
        
        used[best] = true;
        pickedLast.push_back(best);
        
        set<int> toRemove(cur[best].begin(), cur[best].end());
        for(int i = 0; i < n; i++){
            if(used[i]) continue;
            vector<int> filtered;
            for(int x : cur[i]) if(!toRemove.count(x)) filtered.push_back(x);
            cur[i] = filtered;
        }
    }
    
    reverse(pickedLast.begin(), pickedLast.end());
    
    list<int> Q;
    set<int> inQ;
    for(int idx : pickedLast){
        for(int x : a[idx]){
            if(inQ.count(x)) Q.remove(x);
            else inQ.insert(x);
            Q.push_front(x);
        }
    }
    
    bool first = true;
    for(int x : Q){ cout << (first ? "" : " ") << x; first = false; }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}