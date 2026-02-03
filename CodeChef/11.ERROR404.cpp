/*
    Problem Code- ERROR404
    Problem Name- 404 Not Found
    Problem Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ERROR404
    Description- Chef's website has a specific response mechanism based on the HTTP status code received: If the response code is 404, the 
    website will return NOT FOUND. For any other response code different from 404, the website will return FOUND. Given the response code as X, 
    determine the website response.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int response_code;
	cin >> response_code;
	(response_code == 404) ? cout << "NOT FOUND" << endl : cout << "FOUND" << endl;
    return 0;
}
