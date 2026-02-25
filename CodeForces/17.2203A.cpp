/*
    Problem Code- 2203A
    Problem Name- Towers of Boxes
    Problem Link- https://codeforces.com/contest/2203/problem/A
    Description- Monocarp has n identical boxes. The weight of each box is m, and the durability of each box is d. To save space, Monocarp wants 
    to build several "towers" of boxes by stacking them on top of each other. Each tower will consist of a positive (greater than 0) integer 
    number of boxes stacked on top of each other. To ensure that no box breaks, the following condition must be met: for each box, the total 
    weight of all boxes above it must not exceed the durability of that box. Help Monocarp calculate the minimum number of towers he can achieve, 
    given that each of the n boxes must be used.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, d, s, result;
        cin >> n >> m >> d;
        s = 1 + d / m;
        result = (n + s - 1) / s;
        cout << result << endl;
    }
    return 0;
}