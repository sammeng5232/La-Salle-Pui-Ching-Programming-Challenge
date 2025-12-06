#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int s[100000], freq[10000001], ps[10000001];
	for(int i=0; i<n; i++) {
		cin>>s[i];
		freq[s[i]]++;
	}
	ps[0]=freq[0];
	for(int i=1; i<=10000000; i++) ps[i]=ps[i-1]+freq[i];
	for(int i=0; i<n; i++) {
		if(s[i]==0) printf("%.20lf %.20lf 0\n", (double)((double)(n-ps[s[i]]))/((double)n), (double)((double)(freq[s[i]]))/((double)n));
		else printf("%.20lf %.20lf %.20lf\n", (double)((double)(n-ps[s[i]]))/((double)n), (double)((double)(freq[s[i]]))/((double)n), (double)((double)(ps[s[i]-1]))/((double)n));
	}
	return 0;
}