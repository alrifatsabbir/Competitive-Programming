/*
    Problem Code: Value Shuffling
    Problem Name: Value Shuffling
    Problem Link: https://www.codemama.io/problems/value-shuffling
    Description: Write a program that performs the specified swaps and outputs the values of A, B, and C in the 
    given order in string S.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    string S;
    cin >> A >> B >> C;
    cin >> S;

    int newA = C;
    int newB = A;
    int newC = B;

    for (int i = 0; i < 3; i++) {
        if (S[i] == 'A') cout << newA;
        else if (S[i] == 'B') cout << newB;
        else if (S[i] == 'C') cout << newC;

        if (i < 2) cout << " ";
    }
    cout << endl;

    return 0;
}
