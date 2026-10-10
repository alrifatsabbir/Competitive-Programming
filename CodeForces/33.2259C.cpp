/*
    Problem Code: 2259C
    Problem Name: 101
    Problem Link: https://codeforces.com/problemset/problem/2259/C
    Description : The score of an array b of length m is defined as the maximum length of a subarray of b such that the first and last elements of the subarray are
     equal to 1 and all other elements in the subarray are equal to 0. Formally, the score of b is equal to the maximum integer k for which there exists an index i 
     such that:1≤i≤m−k+1bi=bi+k−1=1bi+1=bi+2=…=bi+k−2=0If there is no subarray meeting the requirements, the score of b is 0.You are given an array
      a1,a2,…,an, such that each element is equal to one of −1, 0, or 1. Replace each −1 with either a 0 or 1 such that the score of a is maximal over all possible 
      ways to replace the −1s in a.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        vector<int> negOnes;
        int firstOne = -1, lastOne = -1;
        for(int i = 0; i < n; i++){
            if(a[i] == -1) negOnes.push_back(i);
            if(a[i] == 1){
                if(firstOne == -1) firstOne = i;
                lastOne = i;
            }
        }
        
        if(firstOne == -1){
            // fixed 1 nai
            if(!negOnes.empty()){
                if(negOnes.size() == 1){
                    a[negOnes[0]] = 1;
                } else {
                    int L = negOnes.front();
                    int R = negOnes.back();
                    a[L] = 1;
                    a[R] = 1;
                    for(int idx : negOnes){
                        if(idx != L && idx != R) a[idx] = 0;
                    }
                }
            }
        } else {
            int leftCandidate = firstOne;
            if(!negOnes.empty() && negOnes.front() < firstOne) leftCandidate = negOnes.front();
            int rightCandidate = lastOne;
            if(!negOnes.empty() && negOnes.back() > lastOne) rightCandidate = negOnes.back();
            
            a[leftCandidate] = 1;
            a[rightCandidate] = 1;
            for(int idx : negOnes){
                if(idx != leftCandidate && idx != rightCandidate) a[idx] = 0;
            }
        }
        
        for(int i = 0; i < n; i++){
            cout << a[i] << " \n"[i==n-1];
        }
    }
    return 0;
}