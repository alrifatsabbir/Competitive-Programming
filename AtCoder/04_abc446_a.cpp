/*
    Problem Code: abc446_a
    Problem Name: Handmaid
    Problem Link: https://atcoder.jp/contests/abc446/tasks/abc446_a
    Description: You are given the name S of a certain person. The first character of S is an uppercase English letter, and 
    the other characters are lowercase English letters. The name of this person's handmaid is the string obtained by 
    converting the first letter of S to lowercase and adding Of to the beginning. Find the name of this handmaid.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string d;
    if(!(cin >> d)){
        return 0;
    }
    if(!d.empty()){
        d[0] = tolower(d[0]);
        cout << "Of" << d << endl;
    }
    return 0;
}