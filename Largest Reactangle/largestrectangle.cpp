#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int getmaxarea(int hist[],int n){
    stack<int> a;
    int maxarea=0;
    int t;
    int areatop;
    int i=0;
    while(i<n){ // Loop till the end of the histogram
        if(a.empty() || hist[a.top()]<=hist[i]){
            a.push(i++);
        }
        else{
            t=a.top();
            a.pop();
            areatop=hist[t]*(a.empty() ? i : i-a.top()-1 );
            if(maxarea<areatop){
                maxarea=areatop;
            }
        }
    }
    while(a.empty()==false){
        t=a.top();
        a.pop();
        areatop=hist[t]*(a.empty() ? i : i-a.top()-1);
        if(maxarea<areatop){
            maxarea=areatop;
        }
    }
    return maxarea;
}

int main() {
    int hist[]={2,16,5,6,2,3};
    //cin>>hist;
    int n=sizeof(hist)/sizeof(hist[0]);
    int area = getmaxarea(hist,n) ;
    cout<<area;
    return 0;
}