/*
    Problem Code- 791A
    Problem Name- Bear and Big Brother 
    Problem Link- https://codeforces.com/problemset/problem/791/A
    Description- Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob. Right now, Limak and Bob weigh a and b 
    respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight. Limak eats a lot and his weight is tripled after every year, 
    while Bob's weight is doubled after every year. After how many full years will Limak become strictly larger (strictly heavier) than Bob?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c = 0;
    cin >> a >> b;
    while( a <= b){
        a*=3;
        b*=2;
        c++;
    }
    cout << c << endl;
    return 0;
}