#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, t; cin>>x>>y;
    if(x>y) {t=x; x=y; y=t;}
    if(max(x-1, max((y-x)/2, 100-y))==x-1) cout<<x-1<<"\n";
    else if(max(x-1, max((y-x)/2, 100-y))==100-y) cout<<y+1<<"\n";
    else cout<<x+1<<"\n";
    return 0;
}