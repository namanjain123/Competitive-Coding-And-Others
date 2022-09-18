#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long double ld;
 
#define int             long long int
#define f               first
#define s               second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vvi             vector<vector<int>>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
                        //                int 
#define zrobits(x)      __builtin_ctzll(x)
#define endl            "\n"
#define mod             1000000007
#define inf             1e18
#define range(a,b)      substr(a,b-a+1)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define all(a)          a.begin(),a.end()
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
void yesno(bool b)      {if(b) cout<<"YES\n"; else cout<<"NO\n";}

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
struct custom_hash{
    static uint64_t splitmix64(uint64_t x){
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x)const{
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void fio(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(-9999999999999ms);
}
 
 
/* ******************************************************************************************************************** */
 






void solve(){
  int g,k; cin>>g>>k;
  vi a(11);
  int sum=0;
  for(int i=1;i<=10;i++){
    cin>>a[i];
    if(i>g)
      sum+=a[i];
  }
  int rem=sum%k;
  int val=sum/k;
  int mn=-1, mx=-1;
  if(rem==0){
    mn=val+1;
    mx=val+(a[g]/k);
    if(a[g]%k)
      mx++;
  }
  else{
    mn=val+1;
    a[g]-=(k-rem);
    if(a[g]<=0)
      mx=val+1;
    else{ 
      mx=val+1+(a[g]/k);
      if(a[g]%k)
        mx++;
    }
  }
  cout<<mn<<" "<<mx<<endl;
}



int32_t main(){
  fio();
  w(t)  
    solve();
  return 0;
}

