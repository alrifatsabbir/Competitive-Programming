/*
    Problem Code- FONTA
    Problem Name- Fonta
    Problem Link- https://www.codechef.com/START227D/problems/FONTA
    Description- A drink is called fanta-like if the last three letters of its name are 'n', 't', 'a' and 'a'. in that order. That is, the name of
    the drink must end with nta. You bought a drink from a vending machine. The name of the drink is represented by the string S. It is guaranteed 
    that S consists of exactly 5 lowercase English letters.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[2] == 'n' && s[3] == 't' && s[4] == 'a'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}