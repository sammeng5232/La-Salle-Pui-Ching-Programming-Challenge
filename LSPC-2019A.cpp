#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, e, c=0, t; cin>>n>>k>>e;
    for(int i=0; i<n; i++) {cin>>t; c+=t;}
    cout<<max(n, (c-k+e-1)/e)<<"\n";
    return 0;
}