#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        if(x%2 == 0){
            cout << x << " is even" << endl;
        }else{
            cout << x << " is odd" << endl;
        }
    }
    
  return 0;
}