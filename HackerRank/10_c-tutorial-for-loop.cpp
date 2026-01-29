/*
    Problem Code: c-tutorial-for-loop
    Problem Name: For Loop
    Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
    Description: In this challenge, we practice reading input from stdin and printing output to stdout.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    for(int i = x; i <= y; i++){
        if(i == 1){
            cout << "one" << endl;
        }if(i == 2){
            cout << "two" << endl;
        }if(i == 3){
            cout << "three" << endl;
        }if(i == 4){
            cout << "four" << endl;
        }if(i == 5){
            cout << "five" << endl;
        }if(i == 6){
            cout << "six" << endl;
        }if(i == 7){
            cout << "seven" << endl;
        }if(i == 8){
            cout << "eight" << endl;
        }if(i == 9){
            cout << "nine" << endl;
        }if(i > 9 && i % 2 != 0){
            cout << "odd" << endl;
        }if(i > 9 && i % 2 == 0){
            cout << "even" << endl;
        }
    }
    return 0;
}