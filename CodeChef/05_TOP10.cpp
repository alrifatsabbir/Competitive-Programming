/*
    Problem Code- TOP10
    Problem Name- Masterchef finals
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10
    Description- Chef has been working hard to compete in MasterChef. He is ranked  X out of all contestants. However, only 10 
    contestants would be selected for the finals. Check whether Chef made it to the top 10 or not?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tcase, rank;
    cin >> tcase;
    while(tcase--){
        cin >> rank;
        (10 >= rank) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}