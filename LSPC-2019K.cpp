#include<bits/stdc++.h>
using namespace std;

int main() {
    int k; cin>>k; k--;
    if(k==0) {puts("0"); return 0;}
    int a[10];
    int i=0;
    while(k>0) {
        a[i]=k%10;
        i++;
        k/=10;
    }
    for(int j=i-1; j>=0; j--) cout<<a[j];
    for(int j=1; j<i; j++) cout<<a[j];
    cout<<"\n";
    return 0;
}