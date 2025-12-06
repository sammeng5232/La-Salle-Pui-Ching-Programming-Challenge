#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e; cin>>a>>b>>c>>d>>e;
    double x=20000000000, y, z;
    for(int i5=1; i5<=2; i5++) {
        for(int i15=1; i15<=2; i15++) {
            for(int i20=1; i20<=2; i20++) {
                for(int i6=1; i6<=2; i6++) {
                    y=100; z=100;
                    if(i5==1) y+=5*b;
                    else z-=b;
                    if(i15==1) y+=15*c;
                    else z-=c;
                    if(i20==1) y+=20*d;
                    else z-=d;
                    if(i6==1) y+=6*e;
                    else z-=e;
                    x=min(x, double(1000000000*(double)y/(double)z)-1000000000);
                }
            }
        }
    }
    printf("%.15lf\n", x/1000000000);
    return 0;
}