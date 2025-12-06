#include<bits/stdc++.h>
using namespace std;

int factorial(int k) {
    if (k==1) return 1;
    else return k*factorial(k-1);
}

int main() {
    int n; cin>>n;
    int a[10];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<factorial(n); i++) {
        int s=0;
        bool z=1;
        for(int j=0; j<n; j++) {
            s+=a[j];
            if(s<0||s>99999999) z=0;
        }
        if(z==1) {
            for(int j=0; j<n; j++) cout<<a[j]<<"\n";
            return 0;
        }
        next_permutation(a, a+n);
    }
    puts("Error");
    return 0;
}