/*
    Problem Code- 103870B
    Problem Name- Sanity
    Problem Link- https://codeforces.com/gym/103870/problem/B
    Description- Bossologist is slowly losing his sanity! Bossologist starts off with sanity points, for every email Chessbot sends 
    from polygon, he loses 1 sanity point. The problem writing process lasts Ndays, where each day Chessbot sends between 0 and 1000
    emails (inclusive). Given that Bossologist will gain 1 sanity point for every K days in a row that he doesn't get an email, calculate 
    the number of sanity points he has at the end of N days.
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    ll n, s, k; 
    cin >> n >> s >> k;
    int cent = 0;
    ll num;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num > 0){
            s -= num;
            cent = 0;
        }else{
            cent++;
        }
        if(cent == k){
            s++;
            cent = 0;
        }
    }
    cout << s;
}

int main(){
    int t = 1;
    while(t--){
        solve();
        cout << '\n';
    }

}