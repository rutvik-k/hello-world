#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int depth;
    int left;
    int right;
};

swap


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    node* p[n+1];
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        p[i].left=x;
        p[i].right=y;
        if(i==0)
            p[i].depth=1;
        if(p[i].left!=-1){
            p[p[i].left].depth=p[i].depth+1;
        }
        if(p[i].right!=-1){
            p[p[i].right].depth=p[i].depth+1;
        }
    }
    int T;
    cin>>T;
    for(int j=0;j<T;j++){
        int k;
        cin>>k;
        swap(p)
    }

    return 0;
}
