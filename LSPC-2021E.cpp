#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; long long m; cin>>a>>b>>c>>m;
    m=m%3;
    int x1=a/100, x2=(a/10)%10, x3=a%10;
    int y1=b/100, y2=(b/10)%10, y3=b%10;
    int z1=c/100, z2=(c/10)%10, z3=c%10;
    int delx1=x1-x2, delx2=x2-x3, delx3=x3-x1;
    int dely1=y1-y2, dely2=y2-y3, dely3=y3-y1;
    int delz1=z1-z2, delz2=z2-z3, delz3=z3-z1;
    int x=x1+x2+x3, y=y1+y2+y3, z=z1+z2+z3;
    for(int i=1; i<=m; i++) {
        if(i==1) {x+=delx1; y+=dely1; z+=delz1;}
        else {x+=delx2; y+=dely2; z+=delz2;}
    }
    cout<<x<<" "<<y<<" "<<z<<"\n";
    return 0;
}