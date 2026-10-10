/*
    Problem Code- timeloop
    Problem Name- Stuck In A Time Loop
    Problem Link- https://open.kattis.com/problems/timeloop
    Description- Last night when you went to sleep, you had a strange feeling that you may see the same day again. And your strange feeling came to be when 
    you woke up, everyone seemed to think that it was yesterday morning! The same strange feeling came back in the evening. When this pattern continued for 
    days, you looked for help from a time wizard. The wizard says he can break you out of the time loop, but you must chant his spell. The wizard gives you a 
    magic number, and you must count up to that number, starting at 1, saying “Abracadabra” each time.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int c = 0;
    while(a--){
        c++;
        cout << c << " Abracadabra" << endl;
    }
    return 0;
}