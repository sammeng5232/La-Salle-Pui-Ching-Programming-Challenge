#include<bits/stdc++.h>
using namespace std;

int days[400][13][32];
int day=6;
int prefreq[13][32][7];

void precompute() {
    int day=6;
    for(int i=0; i<400; i++) {
        if(i%400==0||(i%4==0&&i%100!=0)) {
            for(int j=1; j<=12; j++) {
                if(j==2) {
                    for(int k=1; k<=29; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++;
                        day=(day+1)%7;
                    }
                } else if(j==4||j==6||j==9||j==11) {
                    for(int k=1; k<=30; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++; 
                        day=(day+1)%7;
                    }
                } else {
                    for(int k=1; k<=31; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++;
                        day=(day+1)%7;
                    }
                }
            }
        } else {
            for(int j=1; j<=12; j++) {
                if(j==2) {
                    for(int k=1; k<=28; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++;
                        day=(day+1)%7;
                    }
                } else if(j==2||j==4||j==6||j==9||j==11) {
                    for(int k=1; k<=30; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++;
                        day=(day+1)%7;
                    }
                } else {
                    for(int k=1; k<=31; k++) {
                        days[i][j][k]=day;
                        prefreq[j][k][day]++;
                        day=(day+1)%7;
                    }
                }
            }
        }
    }
    return ;
}

int main() {
    int q; cin>>q;
    long long freq[7];
    int i1;
    precompute();
    while(q--) {
        int s, e, m, d; cin>>s>>e>>m>>d;
        for(int i=0; i<7; i++) freq[i]=0;
        int s1=(s+399)/400, e1=e/400;
        for(int i=0; i<7; i++) freq[i]+=prefreq[m][d][i]*(e1-s1);
        for(int i=s; i<s1*400; i++) {
            i1=i%400;
            if(m==2&&d==29) {if(i1%400==0||(i1%4==0&&i1%100!=0)) freq[days[i1][m][d]]++;}
            else freq[days[i1][m][d]]++;
        }
        for(int i=e1*400; i<=e; i++) {
            i1=i%400;
            if(m==2&&d==29) {if(i1%400==0||(i1%4==0&&i1%100!=0)) freq[days[i1][m][d]]++;}
            else freq[days[i1][m][d]]++;
        }
        for(int i=0; i<7; i++) cout<<freq[i]<<" ";
    }
    cout<<"\n";
    return 0;
}