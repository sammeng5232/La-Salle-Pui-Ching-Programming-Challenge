#include<bits/stdc++.h>
using namespace std;

int apbtoint(char c) {
    if(c=='a') return 1;
    if(c=='b') return 2;
    if(c=='c') return 3;
    if(c=='d') return 4;
    if(c=='e') return 5;
    if(c=='f') return 6;
    if(c=='g') return 7;
    if(c=='h') return 8;
    if(c=='i') return 9;
    if(c=='j') return 10;
    if(c=='k') return 11;
    if(c=='l') return 12;
    if(c=='m') return 13;
    if(c=='n') return 14;
    if(c=='o') return 15;
    if(c=='p') return 16;
    if(c=='q') return 17;
    if(c=='r') return 18;
    if(c=='s') return 19;
    if(c=='t') return 20;
    if(c=='u') return 21;
    if(c=='v') return 22;
    if(c=='w') return 23;
    if(c=='x') return 24;
    if(c=='y') return 25;
    if(c=='z') return 26;
    return 0;
}

int main() {
    int n, k; cin>>n>>k;
    char s[500000], t[500000];
    int ss[500000], tt[500000];
    for(int i=0; i<n; i++) {cin>>s[i]; ss[i]=apbtoint(s[i]);}
    for(int i=0; i<n; i++) {cin>>t[i]; tt[i]=apbtoint(t[i]);}
    int ans=0;
    for(int i=0; i<n; i++) ans+=abs(ss[i]-tt[i]);
    sort(ss, ss+n); sort(tt, tt+n);
    for(int i=0; i<n; i++) k+=abs(ss[i]-tt[i]);
    cout<<min(ans, k)<<"\n";
    return 0;
}