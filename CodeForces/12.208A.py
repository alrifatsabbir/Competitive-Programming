# Problem Code- 208A
# Problem Name- Dubstep
# Problem Link- https://codeforces.com/problemset/problem/208/A
# Description- The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't 
# exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "WUB" in it; Vasya didn't change 
# the word order. It is also guaranteed that initially the song had at least one word.

inputStr = input().upper()
replaceStr = inputStr.replace("WUB",' ')
print(replaceStr.strip(' '))