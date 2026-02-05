/*
    Problem Code- DONDRIVE
    Problem Name- Donation Drive
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE
    Description- A blood drive aims to collect N number of blood donations. The drive has collected X donations so far. Find the remaining 
    number of donations needed to reach the target.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int test, req, collect;
    cin >> test;
    while(test--){
        cin >> req >> collect;
        cout << req - collect << endl;
    }
    return 0;
}