/*
    Problem Code: Tile Tidy
    Problem Name: Tile Tidy
    Problem Link: https://codemama.io/problems/tile-tidy
    Description: There are N tiles in a row with red, green or blue paint. How many tiles do you need to remove so that no two 
    consecutive tiles have the same color? Consecutive tiles are those that are next to each other.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;

    for (int i = 1; i < N; i++) {
        if (S[i] == S[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}