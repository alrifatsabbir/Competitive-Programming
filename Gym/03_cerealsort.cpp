/*
    Problem Code- 103886A
    Problem Name- Cereal Sort
    Problem Link- https://codeforces.com/gym/103886/problem/A
    Description- Jesse has n red pandas. Each of them is assigned an integer ID number. It is possible that multiple red pandas have 
    the same ID number. He asks them to form a single-file line sorted by ID number, but due to copious confusion, they line up in a 
    random order! Unsure of what to do, Jesse consults his friend Jerry for help, who claims to have a perfect idea: the Cereal Sorter, 
    a device he recently invented! First, the Cereal Sorter will create a new empty line. Then, while there are still red pandas in the 
    first line, it does the following:
    First, it scans through the first line in k seconds, where k is the number of red pandas in the first line.
    Let m be the minimum ID of a red panda in the first line. The Sorter instantly removes all red pandas with ID m from the first line 
    and teleports them to the end of the second line. See the notes for a better understanding of this process.
    Jesse is convinced that this process may take a long time, as it seems quite complex. Please help him out by determining how many 
    seconds the sorting operation will take!
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long long sum = n;
    for(int i = 0; i < n-1; i++){
        if(arr[i] != arr[i+1]){
            sum = sum + n - i - 1;
        }
    }
    cout << sum << endl;
}