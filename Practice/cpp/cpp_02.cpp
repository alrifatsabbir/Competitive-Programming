// String Palindrome
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, r;
    cin >> s;
    r = s;

    reverse(r.begin(), r.end());
    if(s == r){
        cout << "YES - Palindrome" << endl;
    }else{
        cout << "No, it's not" << endl;
    }
    return 0;
}