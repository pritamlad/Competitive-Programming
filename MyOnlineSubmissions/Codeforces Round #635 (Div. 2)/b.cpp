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
 
//#define endl '\n'
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
		int x,n,m;
		cin>>x>>n>>m;
		while(n || m)
			{
				if(x<=10 and m) x-=10, m--;
				else if(n) x = (x/2) +10, n--;
				else if(m) x-=10, m--;
				if(x<1) break;
			}
		if(x>0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}	
	return 0;
}

