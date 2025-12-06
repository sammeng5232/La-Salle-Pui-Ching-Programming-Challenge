#include<bits/stdc++.h>
using namespace std;

struct chh {
	int x, y;
} c[5000];

int n, m;

bool cmp(chh a, chh b) {
	return a.x<b.x;
}

int main() {
	cin>>n>>m;
	for(int i=0; i<m; i++) cin>>c[i].y>>c[i].x;
	sort(c, c+m, cmp);
	bool z=1;
	if(c[0].x%2==0&&c[0].y==2) z=0;
	if(c[0].x%2==1&&c[0].y==1) z=0;
	if(z) {
		for(int i=m-1; i>=1;) { 
			if(c[i-1].x==c[i].x&&c[i].x==n) n--, i-=2, m-=2;
			else if(c[i-1].x==c[i].x&&c[i].x!=n) {z=0; break;}
			else i--;
		}
	}
	if(z){
		for(int i=1; i<m; i++) {
			if(c[i-1].y==c[i].y&&(c[i].x-c[i-1].x)%2==0) {z=0; break;}
			else if(c[i-1].y!=c[i].y&&(c[i].x-c[i-1].x)%2==1) {z=0; break;}
		}
	}
	if(z) puts("Yes");
	else puts("No");
	return 0;
}