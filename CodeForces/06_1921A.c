/*
    Problem Code- 1921A
    Problem Name- Square
    Problem Link- https://codeforces.com/problemset/problem/1921/A
    Description- Each test consists of several testcases. The first line contains one integer t(1≤t≤100) — the number of 
    testcases. The following is a description of the testcases.Each testcase contains four lines, each line contains two 
    integers xi,yi(−1000≤xi,yi≤1000), coordinates of the corners of the square.It is guaranteed that there is a square 
    with sides parallel to the coordinate axes, with positive (strictly greater than 0) area, with corners in given points.
*/

#include <stdio.h>

int main(){
    int t,x1,y1,x2,y2,x3,y3,x4,y4,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        scanf("%d %d", &x3, &y3);
        scanf("%d %d", &x4, &y4);
    
    if(x1==x2){
        if(y1 > y2){
            y = y1 - y2;
        }else{
            y = y2 - y1;
        }
        printf("%d\n", y*y);
    }else if (x1 == x3)
    {
        if(y1 > y3){ 
            y = y1 - y3;
        }else{
            y = y3 - y1;
        }
        printf("%d\n", y*y);
    }else if (x1 == x4)
    {
        if(y1 > y4){ 
            y = y1 - y4;
        }else{
            y = y4 - y1;
        }
        printf("%d\n", y*y);
    }else if(x2 == x3){
        if(y2 > y3){ 
            y = y2 - y3;
        }else{
            y = y3 - y2;
        }
        printf("%d\n", y*y);
    }else if(x2 == x4){
        if(y2 > y4){ 
            y = y2 - y4;
        }else{
            y = y4 - y2;
        }
        printf("%d\n", y*y);
    }else if(x3 == x4){
        if(y3 > y4){ 
            y = y3 - y4;
        }else{
            y = y4 - y3;
        }
        printf("%d\n", y*y);
    }
    }
    return 0;
}