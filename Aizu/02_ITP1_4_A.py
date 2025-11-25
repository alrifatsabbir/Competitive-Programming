# Problem Code: ITP1_4_A
# Problem Name: A/B Problem
# Problem Link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
# Description: Write a program which reads two integers a and b, and calculates the following values:
# a ÷ b: d (in integer)
# remainder of a ÷ b: r (in integer)
# a ÷ b: f (in real number)

a,b=map(int,input().split())
d=a//b
r=a%b
f=a/b
print(d,r,f'{f:.6f}')