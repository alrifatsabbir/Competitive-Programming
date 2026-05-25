/*
    Problem Code- WINLEAGUE
    Problem Name- Win the League
    Problem Link- https://www.codechef.com/DSAMONDAY004/problems/WINLEAGUE
    Description- In the Premier League, two teams — Team A and Team M — are competing for the title. You are given the final points scored 
    by both teams: If Team A has more points, Team A wins. If Team M has more points, Team M wins. If both teams have equal points, the 
    league ends in a DRAW. Your task is to determine the winner of the league.
*/

#include <bits/stdc++.h>
using namespace std;


// -Wreturn-type
string findLeagueWinner(int A, int M) {
    if(A > M){
        return "TEAM A";
    }
    if(A == M){
        return "DRAW";
    }
    if(A < M){
        return "TEAM M";
    }
}

int main(){
    int A, M;
    cin >> A >> M;
    cout << findLeagueWinner(A, M) << endl;
    return 0;
}