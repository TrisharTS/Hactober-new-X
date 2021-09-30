//My soultion of Diameterof graph in recent codeforcer 745 Div2
//Link:  https://codeforces.com/contest/1581/problem/B

#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
const ll M=1000000007LL;
 
bool solve(){
    ll n,m,k;cin>>n>>m>>k;
    k-=2;
    if (k<0) return false;
    if (n==1) return m==0;
    if (m<n-1) return false;
    if (m<n*(n-1)/2) return k>=2;
    if (m==n*(n-1)/2) return k>=1;
    return false;
}
 
 
int main() {
    fastio;
    int t;cin>>t;
    while (t--) cout<<(solve()?"YES":"NO")<<'\n';
    return 0;
}
