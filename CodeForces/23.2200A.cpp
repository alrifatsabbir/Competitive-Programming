/*
    Problem Code- 2200A
    Problem Name- Eating Game
    Problem Link- https://codeforces.com/contest/2200/problem/A
    Description- There are n players playing a game at a circular table. The i-th player has ai dishes to eat. They take turns eating the food, 
    and any player can go first. During their turn, if player i has any dishes remaining, they must eat exactly one dish. Then, player (imodn)+1 
    starts their turn. This continues until all dishes are finished. The player who eats the last dish is considered the winner. Determine the 
    number of players that can possibly be winners.
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> winners;
    for (int start = 0; start < n; start++) {
        vector<int> temp_a = a;
        int current = start;
        int last_player = -1;
        int dishes_left = accumulate(temp_a.begin(), temp_a.end(), 0);
        while (dishes_left > 0) {
            if (temp_a[current] > 0) {
                temp_a[current]--;
                dishes_left--;
                last_player = current + 1;
            }
            current = (current + 1) % n;
        }
        winners.insert(last_player);
    }
    cout << winners.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}