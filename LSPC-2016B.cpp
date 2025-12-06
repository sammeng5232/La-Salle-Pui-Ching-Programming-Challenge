#include<bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c; cin>>a>>b>>c;
	if(1/a+1/b+1/c<1-1e-12) puts("Yes");
	else puts("No");
	return 0;
}