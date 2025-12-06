#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, r, p; cin>>l>>r>>p;
    if(min(l, r)*100>max(l, r)*p||min(l, r)*100==max(l, r)*p) puts("Ambidextrous");
    else if(l>r) puts("Left-handed");
    else puts("Right-handed");
    return 0;
}