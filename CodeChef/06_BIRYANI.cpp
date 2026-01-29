/*
    Problem Code- BIRYANI
    Problem Name- Biryani Classes
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BIRYANI
    Description- According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from 
    a MasterChef. Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. What 
    is the total amount of money that Chef will have to pay?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test, classes, coins;
    cin >> test;
    while(test--){
        cin >> classes >> coins;
        cout << classes * coins << endl;
    }
    return 0;
}