#include<bits/stdc++.h>
using namespace std;

int main() {
    int d[3], s[3];
    for(int i=0; i<3; i++) cin>>d[i];
    for(int i=0; i<3; i++) cin>>s[i];
    sort(d, d+3); sort(s, s+3);
    if(s[0]>d[0]) {
        if(s[1]>d[1]) {
            if(s[2]>d[2]) puts("3");
            else puts("2");
        }else {
            if(s[2]>d[1]) puts("2");
            else puts("1");
        }
    } else {
        if(s[1]>d[0]) {
            if(s[2]>d[1]) puts("2");
            else puts("1");
        }else {
            if(s[2]>d[0]) puts("1");
            else puts("0");
        }
    }
    return 0;
}