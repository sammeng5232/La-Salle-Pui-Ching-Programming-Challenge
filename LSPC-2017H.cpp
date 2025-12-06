#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, r1, x2, y2, r2; cin>>x1>>y1>>r1>>x2>>y2>>r2;
    printf("%.50lf %.50lf\n", ((double)(x1*r2+x2*r1)/(double)(r1+r2)), ((double)(y1*r2+y2*r1)/(double)(r1+r2)));
    return 0;
}