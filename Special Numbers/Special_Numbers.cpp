include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define ll             long long 
 
 
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void init_code(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(-9999999999999ms);
}
 
 
ll mod=1e9+7;
 
ll fastExp(ll x, ll y){ 
  ll res=1;   
  while(y>0){      
    if(y&1) 
      res=(res*x)%mod;           
    y=y>>1;
    x=(x*x)%mod; 
  } 
  return res; 
}
 
 
void solve(){
  ll n,k; cin>>n>>k;
  ll ans=0;
  for(ll i=0;i<=32;i++){ // all bits in binary representation of k 
    if(k&(1ll<<i))  //if ith bit of k is set, then n^i will be contributing in kth s.n.
      ans=(ans+fastExp(n,i))%mod;
  }
  cout<<ans<<endl;  
}
 
int32_t main(){
  init_code();
  int case_no=1;
  int t; cin>>t;
  while(t--)
    solve();
  return 0;
}