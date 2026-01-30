/*
    Problem Code- PRACLIST
    Problem Name- How many unattempted problems
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACLIST
    Description- Our Chef is currently practicing on CodeChef and is a beginner. The count of ‘All Problems’ in the Beginner section is X. 
    Our Chef has already ‘Attempted’ Y problems among them. How many problems are yet ‘Un-attempted’?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int total, attempted;
    cin >> total >> attempted;
    cout << total - attempted << endl;
    return 0;
}