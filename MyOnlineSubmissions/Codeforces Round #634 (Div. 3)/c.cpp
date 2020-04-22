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
		int n; cin>>n;
		vi a(n);
		for(auto &it:a) cin>>it;
		unordered_map<int,int> mp;
		set<int> s;
		int m=0;
		for(int i=0; i<n; i++)
		{
			mp[a[i]]+=1;
			m= max(m,mp[a[i]]);
			s.insert(a[i]);
		}
		int ans =min((int)s.size()-1,(m));
		if(m==sz(s)-1) cout<<m<<endl;
		else if(m>sz(s)) cout<<sz(s)<<endl;
		else if(sz(a)==1) cout<<0<<endl;
		else cout<<ans<<endl;
	}	
	return 0;
}

