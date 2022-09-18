
#include<bits/stdc++.h>
using namespace std;
 
#define int            long long 
#define f              first
#define s              second
#define pii            pair<int, int> 

 
void init_code(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(-9999999999999ms);
}


bool cmp(pii x, pii y){
  if(x.f<y.f)
    return true;
  if(x.f==y.f)
    return x.s>y.s;
  return false;
}


void solve(){
  int n; cin>>n;
  vector<pii> a(n);
  for(int i=0;i<n;i++){
    int x,y; cin>>x>>y;
    --x; --y;
    a[i]={x,y};
  }
  sort(a.begin(), a.end() , cmp);
  bool ans=true;
  for(int i=0;i<n;i++){
    pii x=a[i];
    if(i+1<n && (a[i+1].f-a[i].f<=1) && (abs(a[i].s-a[i+1].s)<=1)){
      int j=i+1;
      while(j<n && (a[j].f-a[j-1].f<=1) && (abs(a[j-1].s-a[j].s)<=1))
        j++;
      j--;
      int x1=a[i].f, y1=a[i].s, x2=a[j].f, y2=a[j].s;
      if((x1==0 || y1==n-1) && (y2==0 || x2==n-1)){
        ans=false;
        break;
      }
      i=j;
    }
  }
  if(ans)
    cout<<"YES\n";
  else 
    cout<<"NO\n";
}


int32_t main(){
  init_code();
  int t; cin>>t;
  while(t--)
    solve();
  return 0;
}





