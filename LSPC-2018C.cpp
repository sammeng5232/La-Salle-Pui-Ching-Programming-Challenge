#include<bits/stdc++.h>
using namespace std;

int main() {
    int q; cin>>q;
    while(q--) {
        int x; cin>>x;
        if(__builtin_popcount(x)==1) puts("No");
        else puts("Yes");
    }
    return 0;
}