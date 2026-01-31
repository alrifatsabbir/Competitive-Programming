/*
    Problem Code- DETSCORE
    Problem Name- Determine the Score
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DETSCORE
    Description- Chef appeared for a placement test. There is a problem worth X points. Chef finds out that the problem has exactly 
    10 test cases. It is known that each test case is worth the same number of points. Chef passes N test cases among them. Determine 
    the score Chef will get. NOTE: See sample explanation for more clarity.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase, chefTest, passTest;
    cin >> testCase;
    while(testCase--){
        cin >> chefTest >> passTest;
        cout << chefTest/10 * passTest << endl;
    }
    return 0;
}