/*
    Problem Code- 69A
    Problem Name- Young Physicist
    Problem Link- https://codeforces.com/problemset/problem/69/A
    Description- The first line contains a positive integer n (1 ≤ n ≤ 100), then follow n lines containing three integers 
    each: the xi coordinate, the yi coordinate and the zi coordinate of the force vector, applied to the body 
    ( - 100 ≤ xi, yi, zi ≤ 100).
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    int m = 0, n = 0, o = 0;

    while(a--){
        int x, y, z;
        cin >> x >> y >> z;
        m += x;
        n += y;
        o += z;
    }

    if(m==0 && n == 0 && o == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}