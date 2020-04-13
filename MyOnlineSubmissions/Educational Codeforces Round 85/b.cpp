#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pi;
 
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
 
#define rep(i,a) for(int i=0;i<a;i++)
#define repn(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=a;i>b;i--)
 
#define endl '\n'
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
 
const int MOD = 1000000007;
const ll INF = 1e18;

 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vl a(n),sum(n+1,0);
		for(auto &it: a) cin>>it;
		sort(all(a),greater<int>());
		for(int i=1; i<=n; i++) sum[i] = sum[i-1]+a[i-1];
		int ans =0;
		for(int i=1; i<=n; i++)
		{
			if((sum[i]/x)>=i) ans = max(ans,i);
		}
		cout<<ans<<endl;
		
	}
	return 0;
}

