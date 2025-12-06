#include<bits/stdc++.h>
using namespace std;

inline long long rd() {
	long long l=0, f=1;
	char c=getchar();
	while(c<'0'||c>'9') {if(c=='-')f=-1; c=getchar();}
	while(c>='0'&&c<='9') {l=(l<<1)+(l<<3)+c-'0'; c=getchar();}
	return l*f;
}
int sdy, smth, syr, bdy, bmth, gdy, gmth;
int mxd[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool ck(int d,int m) {
	if(d==sdy&&m==smth) return 1;
	if(d==bdy&&m==bmth) return 1;
	if(d==gdy&&m==gmth) return 1;
	return 0;
}

void func(int &d,int &m,int &y) {
	bool flag=0;
	if(y%4==0) flag=1;
	if(y%100==0) flag=0;
	if(y%400==0) flag=1;
	d++;
	if(m==2&&flag) {if(mxd[m]+1<d) {m++; d=1;}}
	else if(mxd[m]<d) {m++; d=1;}
	if(m==13) m=1, y++;
}

int main() {
	int dy=rd(), mth=rd(), yr=rd(); int spe=0;
	sdy=dy; smth=mth; syr=yr;
	bdy=rd(); bmth=rd(); gdy=rd(); gmth=rd();
	for(int i=1; i<=2048; ++i) {
		func(dy, mth, yr);
		if(ck(dy, mth)||i%100==0)spe++;
	}
	cout<<spe<<"\n";
	return 0;
}