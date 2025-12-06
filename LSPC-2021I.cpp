#include<bits/stdc++.h>
using namespace std;

struct sch{
    int like;
    int check;
} a[100000];

bool cmp(sch r, sch s) {
    return r.like<s.like;
}

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i].like;
    int x, y, z; cin>>x>>y>>z;
    int ax=a[x-1].like, ay=a[y-1].like, az=a[z-1].like;
    a[x-1].check=15; a[y-1].check=15; a[z-1].check=15;
    sort(a, a+n, cmp);
    int submax;
    if(a[n-1].check!=15) submax=a[n-1].like;
    else if(a[n-2].check!=15) submax=a[n-2].like;
    else if(a[n-3].check!=15) submax=a[n-3].like;
    else submax=a[n-4].like;
    cout<<max(0, submax-ax+1)+max(0, submax-ay+1)+max(0, submax-az+1)<<"\n";
    return 0;
}