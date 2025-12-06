#include<bits/stdc++.h>
using namespace std;

string str, ans;
int calltimes, deg, coeff, newdeg, newcoeff;
bool z=0;
string null;

int strtoint(string r) {
    if(r==""||r=="+") return 1;
    if(r=="-") return -1;
    return atoi(r.c_str());
}

string derivativeofmonomial (string t) {
    calltimes++;
    auto xpos=t.find('x');
    if(xpos==string::npos) {z=1; return null;}
    deg=strtoint(t.substr(xpos+1, 10000));
    coeff=strtoint(t.substr(0, xpos));
    newdeg=deg-1;
    newcoeff=deg*coeff;
    stringstream newterm;
    if(newcoeff>0) newterm<<"+";
    newterm<<newcoeff;
    if(newdeg>=1) newterm<<"x";
    if(newdeg>=2) newterm<<newdeg;
    return newterm.str();
}

int main() {
    cin>>str;
    int s=0;
    for(int i=1; i<=str.length(); i++) {
        if(i==str.length()||str[i]=='+'||str[i]=='-') {
            ans+=derivativeofmonomial(str.substr(s, i-s));
            s=i;
        }
    }
    if(calltimes==1&&z==1) {puts("0"); return 0;}
    if(ans.substr(0, 1)=="+") cout<<ans.substr(1, 100000)<<"\n";
    else cout<<ans<<"\n";
    return 0;
}