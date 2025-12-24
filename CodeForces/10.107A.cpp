/*
    Problem Code: 107A
    Problem Name: Dorm Water Supply
    Problem Link: https://codeforces.com/contest/107/problem/A
    Description: The German University in Cairo (GUC) dorm houses are numbered from 1 to n. Underground water pipes connect these houses together. 
    Each pipe has certain direction (water can flow only in this direction and not vice versa), and diameter (which characterizes the maximal 
    amount of water it can handle). For each house, there is at most one pipe going into it and at most one pipe going out of it. With the new 
    semester starting, GUC student and dorm resident, Lulu, wants to install tanks and taps at the dorms. For every house with an outgoing water 
    pipe and without an incoming water pipe, Lulu should install a water tank at that house. For every house with an incoming water pipe and 
    without an outgoing water pipe, Lulu should install a water tap at that house. Each tank house will convey water to all houses that have a 
    sequence of pipes from the tank to it. Accordingly, each tap house will receive water originating from some tank house.In order to avoid 
    pipes from bursting one week later (like what happened last semester), Lulu also has to consider the diameter of the pipes. The amount of 
    water each tank conveys should not exceed the diameter of the pipes connecting a tank to its corresponding tap. Lulu wants to find the maximal 
    amount of water that can be safely conveyed from each tank to its corresponding tap.
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
 
using namespace std;
 
const int maxnumber = 1005;
 
int nxt[maxnumber];
int indeg[maxnumber];
int cost[maxnumber][maxnumber];
int main (){
    int n,p;
    int a,b,c;
    scanf("%d%d",&n,&p);
    memset(cost,0x3f,sizeof(cost));
    memset(nxt,0,sizeof(nxt));
    memset(indeg,0,sizeof(indeg));
    for(int i = 0;i < p;i ++){
        scanf("%d%d%d",&a,&b,&c);
        cost[a][b] = c;
        nxt[a] = b;
        indeg[b] = 1;
    }
    int ra[maxnumber],rb[maxnumber],rc[maxnumber];
    int top = 0;
    for(int i = 1;i <= n;i ++){
        if(indeg[i] == 0 && nxt[i] != 0){
            int minn = 0x3f3f3f3f;
            int tp = i;
            while(nxt[tp] != 0){
                minn = min(minn, cost[tp][nxt[tp]]);
                tp = nxt[tp];
            }
            ra[top] = i;
            rb[top] = tp;
            rc[top ++] = minn;
        }
    }
    printf("%d\n",top);
    for(int i = 0;i < top;i ++){
        printf("%d %d %d\n",ra[i], rb[i], rc[i]);
    }
    return 0;
}