/*
    Problem Code- statistics
    Problem Name- Statistics
    Problem Link- https://open.kattis.com/problems/statistics
    Description- The input contains between 1 and 10 test cases. Each test case is described by one line of input, which begins 
    with an integer 1 < n < 30 and is followed by n integers which make up the sample to be analyzed. Each value in the sample 
    will be in the range -1 000 000 to 1 000 000. Input ends at the end of file.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int c = 1;

    while(cin >> n){
        vector<int> num(n);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        int min = *min_element(num.begin(),num.end());
        int max = *max_element(num.begin(),num.end());

        int r = max - min;

        cout << "Case " << c << ": " << min << " " << max << " " << r << endl;
        c++;
    }

    return 0;
}
