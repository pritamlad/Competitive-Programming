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
		vi a(n),b(n);
		for(auto &it:a) cin>>it;
		for(auto &it:b) cin>>it;
		bool ok =true;
		bool p =false;
		bool ng = false;
		for(int i=0;i<n;i++)
		{	
			//cout<<a[i]<<" "<<b[i]<<endl;
			if(i==0 && a[i]!=b[i]) ok =false;
			if(b[i]>a[i] && !p) ok =false;
			if(b[i]<a[i] && !ng) ok =false;
			if(a[i]>0) p =true;
			if(a[i]<0) ng =true;
		}
		cout<<(ok?"YES":"NO")<<endl;
	}
	return 0;
}

