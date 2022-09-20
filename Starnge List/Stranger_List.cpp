#include<bits/stdc++.h>
using namespace std;
typedef long l;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
#define PB push_back
#define FOR(i,a,b)  for(int i=a;i<b;i++)
 
 
void idk(int a) {
	a=1;
}
 
void arrrr(int a [],int n) {
	FOR(i,0,n) a[i]=0;
 
 
}
 
void swap(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}
 
 
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
 
ll t; cin >> t;
while(t--) {
	ll n,x; cin >> n >> x;
	pair<ll,ll> p[n];
	ll sum=0;
	ll miin=INT_MAX;
	FOR(i,0,n) {
		cin >> p[i].first;
		ll a=0;
		ll b=p[i].first;
		while(b%x==0) {
				a++;
				b/=x;
 
		}
		miin=min(miin,a);
		p[i].second=a;
		sum+=p[i].first;
		// cout<<a<<endl;
	}
	// cout<<miin<<endl;
	ll ans;
	if(miin	==0) {
		ans=sum;
		for(auto x:p) {
			if(x.second	==miin) {
				break;
			}
			
			ans+=x.first;
		}
		cout<<ans<<endl;
 
	}
	else {
		ans=sum*(miin+1);
		if(n!=1) 
		for(auto x:p) {
 
			if(x.second	==miin) {
				break;
			}
			ans+=x.first;
			
		}
		cout<<ans<<endl;
	}
 
 
}
 
 
}
