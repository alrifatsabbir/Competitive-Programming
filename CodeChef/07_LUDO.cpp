/*
    Problem Code- LUDO
    Problem Name- Chef Plays Ludo
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LUDO
    Description- Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 6 
    on the die. In the current turn, Chef rolled the number X on the die. Determine if Chef can enter a new token into the play in the 
    current turn or not.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,token = 1;
    cin >> test;
    while(test--){
        cin >> token;
        (token == 6) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}