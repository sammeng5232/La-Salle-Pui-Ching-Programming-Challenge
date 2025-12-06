#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    string s;
    int p1=0, x1=0, ten1=0, p2=0, x2=0, ten2=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>s;
        if(s.length()==1) {
            if (s[0]=='1') p1+=1;
            if (s[0]=='2') p1+=2;
            if (s[0]=='3') p1+=3;
            if (s[0]=='4') p1+=4;
            if (s[0]=='5') p1+=5;
            if (s[0]=='6') p1+=6;
            if (s[0]=='7') p1+=7;
            if (s[0]=='8') p1+=8;
            if (s[0]=='9') p1+=9;
            if (s[0]=='X') {p1+=10; x1++; ten1++;}
        } else {p1+=10; ten1++;}
    }
    for (int i=0; i<n; i++) {
        cin>>s;
        if(s.length()==1) {
            if (s[0]=='1') p2+=1;
            if (s[0]=='2') p2+=2;
            if (s[0]=='3') p2+=3;
            if (s[0]=='4') p2+=4;
            if (s[0]=='5') p2+=5;
            if (s[0]=='6') p2+=6;
            if (s[0]=='7') p2+=7;
            if (s[0]=='8') p2+=8;
            if (s[0]=='9') p2+=9;
            if (s[0]=='X') {p2+=10; x2++; ten2++;}
        } else {p2+=10; ten2++;}
    }
    if (p1>p2) cout<<"Yuju\n";
    else if (p2>p1) cout<<"Yerin\n";
    else {
        if (ten1>ten2) cout<<"Yuju\n";
        else if (ten2>ten1) cout<<"Yerin\n";
        else {
            if (x1>x2) cout<<"Yuju\n";
            else if (x2>x1) cout<<"Yerin\n";
            else cout<<"Shoot-off";
        }
    }
    return 0;
}