/*
    Problem Code: 2259A
    Problem Name: Moo Language
    Problem Link: https://codeforces.com/problemset/problem/2259/A
    Description : Farmer John is trying to increase literacy rates in the United Cows of Farmer John (UCFJ). The UCFJ consists of n fields and nk
	farms (where n is a multiple of k), with each farm consisting of k consecutive fields. In other words, the i-th field is in the ⌈ik⌉-th farm:
	Fields 1,2,…,k are in the first farm, fields k+1,k+2,…,2k are in the second farm, etc.
	Farmer John wants to build schools such that each farm has at least one school. However, some fields are owned by Farmer Nhoj,
	who will charge Farmer John extra to build a school there. Farmer John wants to know the minimum number of times that he would have to build a
	school on Farmer Nhoj's land in order to ensure that each farm has at least one school.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        char s[25];
        cin >> s;

        int ans = 0;
        for(int start = 0; start < n; start += k){
            bool hasZero = false;
            for(int i = start; i < start + k; i++){
                if(s[i] == '0'){
                    hasZero = true;
                    break;
                }
            }
            if(!hasZero) ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}