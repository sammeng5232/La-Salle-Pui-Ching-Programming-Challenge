#include<bits/stdc++.h>
using namespace std;

int main() {
    int qa, qb, sa, sb, w, n, m; cin>>qa>>qb>>sa>>sb>>w>>n>>m;
    int a[1000000], b[1000000];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int ans1=(qa+1)*sa+w;
    int cnt1=0;
    for(int i=0; i<m; i++) if(b[i]<ans1||b[i]==ans1) cnt1++;
    if(b[0]<qb*sb) b[0]=qb*sb;
    for(int i=1; i<m; i++) if(b[i]-b[i-1]<sb) b[i]=b[i-1]+sb;
    if(cnt1==0) ans1+=sb+max(0, qb*sb-((qa+1)*sa+w));
    else ans1+=sb+max(0, b[cnt1-1]+sb-((qa+1)*sa+w));
    int ans2=(qb+1)*sb+w;
    int cnt2=0;
    for(int i=0; i<n; i++) if(a[i]<ans2||a[i]==ans2) cnt2++;
    if(a[0]<qa*sa) a[0]=qa*sa;
    for(int i=1; i<n; i++) if(a[i]-a[i-1]<sa) a[i]=a[i-1]+sa;
    if(cnt2==0) ans2+=sa+max(0, qa*sa-((qb+1)*sb+w));
    else ans2+=sa+max(0, a[cnt2-1]+sa-((qb+1)*sb+w));
    cout<<min(ans1, ans2)<<"\n";
    return 0;
}

/*3 4 5 6 0 10 10
15 16 17 18 19 21 28 30 31 32
2 4 6 8 10 12 14 16 18 20