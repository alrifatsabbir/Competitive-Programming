/*
    Problem Code- EQBEND
    Problem Name- Beginnings and Endings
    Problem Link- https://www.codechef.com/START239B/problems/EQBEND
    Description- An array A of length N is called good if its first element is equal to its last element, i.e. if A1=AN (using 1-indexing). You are given an 
    array A of length N. In one move, you can swap two adjacent elements of A, i.e. choose an index i (1≤i<N) and swap(Ai,Ai+1)swap(A i ,A i+1). Find the minimum 
    number of moves needed to make the array A good. If it's impossible to make A good no matter what, print −1 instead.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int& x : A) cin >> x;

        if (A[0] == A[N-1]) { cout << 0 << "\n"; continue; }

        map<int,int> leftmost, rightmost;
        for (int i = 0; i < N; i++) {
            if (!leftmost.count(A[i])) leftmost[A[i]] = i;
            rightmost[A[i]] = i;
        }

        int ans = INT_MAX;
        for (auto& [v, l] : leftmost) {
            int r = rightmost[v];
            if (l != r)
                ans = min(ans, l + (N - 1 - r));
        }

        cout << (ans == INT_MAX ? -1 : ans) << "\n";
    }
    return 0;
}