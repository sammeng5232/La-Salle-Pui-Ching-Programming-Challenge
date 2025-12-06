#include<bits/stdc++.h>
using namespace std;

int num[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int l[10]={3, 4, 1, 0, 2, 2, 3, 0, 3, 2};
int r[10]={3, 5, 2, 3, 3, 1, 1, 3, 3, 3};

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a=n/10, b=n%10;
        int ans=num[a]+num[b];
        if(r[a]==l[b]) {
            if(r[a]==1||r[a]==2) ans--;
            else ans-=2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}