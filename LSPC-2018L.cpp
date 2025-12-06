#include<bits/stdc++.h>
using namespace std;

int main() {
    int w, a, b; cin>>w>>a>>b;
    if((a-b)%2!=0) {puts("Impossible"); return 0;}
    if(a==b) {
        puts("Possible");
        for(int i=1; i<a; i++) cout<<".";
        cout<<"A";
        for(int i=a+1; i<=w; i++) cout<<".";
        cout<<"\n";
        cout<<"X";
        for(int i=2; i<=w; i++) cout<<".";
        cout<<"\n";
        for(int i=1; i<b; i++) cout<<".";
        cout<<"B";
        for(int i=b+1; i<=w; i++) cout<<".";
        cout<<"\n";
    }else if(a<b) {
        if(a==1) {
            puts("Impossible"); 
            return 0;
        }else if(a==2) {
            if(b==4) {puts("Impossible"); return 0;}
            else {
                puts("Possible");
                cout<<"*A";
                for(int i=a+1; i<=w; i++) cout<<".";
                cout<<"\n";
                cout<<"X";
                for(int i=2; i<b/2; i++) cout<<"*";
                for(int i=b/2; i<=w; i++) cout<<".";
                cout<<"\n";
                for(int i=1; i<b; i++) cout<<".";
                cout<<"B";
                for(int i=b+1; i<=w; i++) cout<<".";
                cout<<"\n";
            }
        }else {
            puts("Possible");
            for(int i=1; i<=a-2; i++) cout<<".";
            cout<<"*A";
            for(int i=a+1; i<=w; i++) cout<<".";
            cout<<"\n";
            cout<<"X";
            for(int i=2; i<=a-2; i++) cout<<".";
            for(int i=a-1; i<=(a+b)/2-2; i++) cout<<"*";
            for(int i=(a+b)/2-1; i<=w; i++) cout<<".";
            cout<<"\n";
            for(int i=1; i<b; i++) cout<<".";
            cout<<"B";
            for(int i=b+1; i<=w; i++) cout<<".";
            cout<<"\n";
        }
    }else {
        if(b==1) {
            puts("Impossible");
            return 0;
        }else if(b==2) {
            if(a==4) {puts("Impossible"); return 0;}
            else {
                puts("Possible");
                for(int i=1; i<=a-1; i++) cout<<".";
                cout<<"A";
                for(int i=a+1; i<=w; i++) cout<<".";
                cout<<"\n";
                cout<<"X";
                for(int i=2; i<a/2; i++) cout<<"*";
                for(int i=a/2; i<=w; i++) cout<<".";
                cout<<"\n";
                cout<<"*B";
                for(int i=b+1; i<=w; i++) cout<<".";
                cout<<"\n";
            }
        }else {
            puts("Possible");
            for(int i=1; i<a; i++) cout<<".";
            cout<<"A";
            for(int i=a+1; i<=w; i++) cout<<".";
            cout<<"\n";
            cout<<"X";
            for(int i=2; i<=b-2; i++) cout<<".";
            for(int i=b-1; i<=(a+b)/2-2; i++) cout<<"*";
            for(int i=(a+b)/2-1; i<=w; i++) cout<<".";
            cout<<"\n";
            for(int i=1; i<=b-2; i++) cout<<".";
            cout<<"*B";
            for(int i=b+1; i<=w; i++) cout<<".";
            cout<<"\n";
        }
    }
    return 0;
}

//Key observation: Adding an obstacle increases each of d(A, X) and d(B, X) by 0 or 2
//So the parities of the distances are invariant under the addition of obstacles
//If d(A, X)=/=d(B, X) (mod 2), impossible
//Assume otherwise from now on, WLOG, say d(A, X)<d(B, X), d(A, X)=d(B, X) (mod 2)

//d(A, X)=1<=>A=(1, 1)
//B=(3, 1)=>No obstacles
//B=(3, b), b>=2=>Impossible

//d(A, X)=2<=>A=(1, 2)
//B=(3, 2)=>No obstacles
//B=(3, 4)=>Impossible
//B=(3, 6)
//*A....
//X*....
//.....B
//B=(3, 8)
//*A......
//X**.....
//.......B
//B=(3, 2k), k>=3=>Obstables: (1, 1), (2, 2), (2, 3), ..., (2, k-1)

//d(A, X)>=3<=>A=(1, d(A, X))
//Obstacles: (1, d(A, X)-1), (2, d(A, X)-1), (2, d(A, X)), ..., (2, (d(A, X)+d(B, X))/2-2)
//....*A....
//X...**....
//.........B

//.......A
//X**.....
//*B......

//.........A
//X...**....
//....*B....