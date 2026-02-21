/*
    Problem Code- 2192A
    Problem Name- String Rotation Game
    Problem Link- https://codeforces.com/contest/2192/problem/A
    Description- You are playing a game where you are given a string s of length n. You can cyclically rotate∗ the string however you want. 
    Your score is then calculated as the number of blocks in the final string. Please find the maximum score possible.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int max_score = 0;
        for (int i = 0; i < n; i++) {
            string rotated = s.substr(i) + s.substr(0, i);
            int blocks = 1;
            for (int j = 0; j < n - 1; j++) {
                if (rotated[j] != rotated[j + 1]) {
                    blocks++;
                }
            }
            max_score = max(max_score, blocks);
        }
        cout << max_score << endl;
    }
    return 0;
}