#include <bits/stdc++.h>
using namespace std;

int main () {
    long long r, d;
    cin>>r>>d;
    long long c=0, c2=0;;
    for (long long i=1; i<=r+d; i++) c+=floor(sqrt((r+d)*(r+d)-i*i))+1;
    c=4*c+1;
    if (r<d||r==d) {cout<<c<<"\n"; return 0;}
    else {
        for (long long i=1; i<=r-d; i++) c2+=ceil(sqrt((r-d)*(r-d)-i*i));
        c2=4*c2+1;
    }
    cout<<c-c2<<"\n";
    return 0;
}