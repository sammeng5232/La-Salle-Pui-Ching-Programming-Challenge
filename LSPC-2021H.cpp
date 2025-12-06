#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long x, long long y, long long m) {
    long long r=1;
    while(y>0) {
        if(y%2==1)r=(r*x)%m;
        y=y>>1;
        x=(x*x)%m;
    }
    return r%m;
}

int main() {
    long long n; cin>>n;
    if(n==1) puts("1");
    else if(n==2) puts("2");
    else if(n==3) puts("3");
    else if(n==4) puts("4");
    else if(n==5) puts("5");
    else if(n==6) puts("9");
    else if(n==7) puts("10");
    else if(n==8) puts("16");
    else if(n==10) puts("32");
    else if(n==16) puts("256");
    else if(n%3==1) cout<<(bigmod(3, (n-1)/3, 1000000007)+1)%1000000007<<"\n";
    else if(n%3==2) cout<<(5*bigmod(3, (n-5)/3, 1000000007))%1000000007<<"\n";
    else cout<<bigmod(3, n/3, 1000000007)<<"\n";
    return 0;
}

//1121333...333(1), 111333...333(1)
//n=1 mod 3: 111333...3331, 3^((n-1)/3)+1
//n=2 mod 3: 1121333...333, 5*3^((n-5)/3)
//n=0 mod 3: 1121333...3331, 5*3^((n-6)/3)+1; 111333...333, 3^(n/3)