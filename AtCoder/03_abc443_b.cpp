/*
    Problem Code: abc443_b
    Problem Name: Setsubun 
    Problem Link: https://atcoder.jp/contests/abc443/tasks/abc443_b
    Description: At the annual Setsubun festival, one eats the same number of beans as their age. Takahashi-kun does not eat beans at any other 
    time.He is N years old at this year's Setsubun (0 years later). At the earliest, how many years later will he have eaten a total of K or more 
    beans from this year onward (including this year)? He is immortal, so he will eventually have eaten a total of K or more beans from this year 
    onward.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m = 0;
    cin >> n >> k;
    for(int i = 0; ; i++){
        m += n;
        n++;
        if(m >= k){
            cout << i;
            return 0;
        }
    }
    return 0;
}