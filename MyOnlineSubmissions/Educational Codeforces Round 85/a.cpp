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
		int x,y,x1,y1,i;
		x=0,y=0;
		bool ok =true;
		for(i=0; i<n; i++)
		{	
			cin>>x1>>y1;
			if(y1>x1) 
			{
				ok =false;
			}
			if(x1<x)
			{
				ok =false;
			}
			if (y1<y)
			{
				ok =false;
			}
			if((x1-x)<(y1-y)) ok =false;
			x=x1;
			y=y1;
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;			
	}
	return 0;
}


