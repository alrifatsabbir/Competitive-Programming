/*
    Problem Code- 2261A
    Problem Name- Hey, it's me, Souvlakiti
    Problem Link- https://codeforces.com/problemset/problem/2261/A
    Description- Souvlakiti and Kalamakiti are playing the game again. All integers from1 ton distributed among the players. This distribution can be represented 
    as a binary strings lengthsn , Wheresi= 1 , if an integeri got to Souvlakiti, andsi= 0 , if it was given to Kalamakiti. It is guaranteed that initially Souvlakiti has at 
    least one integer (there is at least one symbol1 Vs ). The game will continue10100 Moves. Players take turns, with Souvlakiti going first. During a player's turn,
     they must choose exactly one integer they own and give it to the other player. It can be proven that, given the game's constraints, this is always possible. After 
     everything is completed10100 moves, Suvlakiti will calculate his result as the range of the integers belonging to him (that is, his result is equal tomax 
     ( S) − min ( S) , WhereS — the set of integers belonging to it). It can be proven that by the end of the game Souvlakiti will have at least one integer. Souvlakiti 
      wants to maximize her own score, and Kalamakiti wants to minimize Souvlakiti's score. What will Souvlakiti's final score be if both players play optimally?
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while(a--){
        int n, k;
        cin >> n >> k;
        vector<int> freq(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) {
                freq[x]++;
            }
        }

        int answer = 0;
        int sum = 0;

        for (int m = 0; m <= n; m++) {
            sum += freq[m];
            if (sum < (m + 1) * k) {
                break;
            }
            answer = m + 1;
        }

        cout << answer << endl;
    }
    return 0;
}




