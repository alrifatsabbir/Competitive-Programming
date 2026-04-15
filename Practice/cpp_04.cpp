// Largest/Smallest value in array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << *max_element(arr, arr+n) << endl;
    cout << *min_element(arr, arr+n) << endl;
    return 0;
}