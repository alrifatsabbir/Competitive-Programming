/*
    Problem Code- OFFBY1
    Problem Name- Off By One
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OFFBY1
    Description- You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.
    For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161. Given A and B, can you predict what the calculator 
    will print when you ask it for A+B?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	cout << A+B << "1"<< endl;
	return 0;
}
