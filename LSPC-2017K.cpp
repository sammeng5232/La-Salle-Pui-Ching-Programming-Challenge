#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, ans; cin>>n>>m>>k;
    int x[10000], y[10000];
    if(n==1&&m==1) ans=1;
    else if(n==1||m==1) ans=2;
    else ans=4;
    for(int i=0; i<k; i++) {
        cin>>x[i]>>y[i];
        if(x[i]==1&&y[i]==1) ans--;
        else if(x[i]==1&&y[i]==m) ans--;
        else if(x[i]==n&&y[i]==1) ans--;
        else if(x[i]==n&&y[i]==m) ans--;
    }
    cout<<ans<<"\n";
    return 0;
}