/*
    Problem Code: 263A
    Problem Name: Beautiful Matrix
    Problem Link: https://codeforces.com/problemset/problem/263/A
    Description : The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element 
    of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single 
    number one
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int m = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                if(i > 2){
                    m += i - 2;
                }else{
                    m += 2 - i;
                }
                if(j > 2){
                    m += j - 2;
                }else{
                    m += 2 - j;
                }
            }
        }
    }
    cout << m;
    return 0;
}