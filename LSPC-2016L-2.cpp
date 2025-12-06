#include<bits/stdc++.h>
using namespace std;

int n,big,small,eq;
int f[100001];
vector<int>up;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		up.push_back(f[i]);
	}
	sort(up.begin(),up.end());
	for(int i=1;i<=n;i++){
	    big=0;
    	small=0;
	    eq=0;
	    int t1,t2;
	    t1=lower_bound(up.begin(),up.end(),f[i])-up.begin();
	    small=t1;
	    if(up[n-1]==f[i]) big=0;
	    else {
			t2=upper_bound(up.begin(),up.end(),f[i])-up.begin();
		    big=n-t2;
	    }
	    eq=n-big-small;
	    printf("%.20f %.20f %.20f\n",(float)(big)/n,(float)(eq)/n,(float)(small)/n);
	}	
	return 0; 
}