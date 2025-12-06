#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    int c1=0, c2=0;
    int n=s.length();
    for(int i=0; i<n-2; i++) if(s[i]=='L'&&s[i+1]=='S'&&s[i+2]=='C') c1++;
    for(int i=0; i<n-3; i++) if(s[i]=='P'&&s[i+1]=='C'&&s[i+2]=='M'&&s[i+3]=='S') c2++;
    if(c1>c2) puts("LSC");
    else if(c1==c2) puts("Tie");
    else puts("PCMS");
    return 0;
}