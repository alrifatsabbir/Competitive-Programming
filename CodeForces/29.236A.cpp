/*
    Problem Code: 236A
    Problem Name: Boy or Girl
    Problem Link: https://codeforces.com/problemset/problem/236/A
    Description : Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, 
    our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.
    But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. 
    So he came up with a way to recognize users' genders by their user names. This is his method: if the number of distinct characters in one's user name is odd,
     then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by 
     his method.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string words;
    cin >> words;
    set<char> unique_chars(words.begin(), words.end());
    if(unique_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!"<<endl;
    }
}