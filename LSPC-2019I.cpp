#include<bits/stdc++.h>
using namespace std;

int xcor(int x) {
    if(x<=16) return 1;
    else if(x<=18) return 2;
    else if(x<=20) return 3;
    else if(x<=22) return 4;
    else if(x<=24) return 5;
    else if(x<=68) return 6;
    else if(x<=70) return 5;
    else if(x<=72) return 4;
    else if(x<=74) return 3;
    else if(x<=76) return 2;
    else return 1;
}

int ycor(int x) {
    if(x<=14) return 13+(x+1)/2;
    else if(x<=28) return 20;
    else if(x<=66) return 34-(x+1)/2;
    else if(x<=80) return 1;
    else if(x<=92) return (x+1)/2-39;
    else return (x+1)/2-38;
}

int main() {
    int a[10];
    for(int i=0; i<10; i++) cin>>a[i];
    int ans=1<<30, temp;
    for(int i=0; i<3628800; i++) {
        temp=0;
        temp+=abs(1-xcor(a[0]))+abs(13-ycor(a[0]))+abs(1-xcor(a[9]))+abs(8-ycor(a[9]));
        for(int j=0; j<=8; j++) temp+=abs(xcor(a[j])-xcor(a[j+1]))+abs(ycor(a[j])-ycor(a[j+1]));
        ans=min(ans, temp);
        next_permutation(a, a+10);
    }
    cout<<ans<<"\n";
    return 0;
}