// Exchange value in two without using third
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << "A =" << a << ", B =" << b << endl;
    a = a + b; // 3 + 5 = 8 
    b = a - b; // 8 - 5 = 3
    a = a - b; // 8 - 3 = 5
    cout << "A =" << a << ", B =" << b << endl;
    return 0;
}