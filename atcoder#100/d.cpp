#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#define int long long
void solve()
{
  int N,M;
  cin>>N>>M;
  int x,y,z;
  // So we have total 8 posibilites got +--
  vector<int>ans[8];
   for(int i=0;i<N;i++)
  {
  		cin>>x>>y>>z;
  		ans[0].pb(x+y+z);
  		ans[1].pb(x+y-z);
  		ans[2].pb(x-y+z);
  		ans[3].pb(x-y-z);
  		ans[4].pb(-x+y+z);
  		ans[5].pb(-x+y-z);
  		ans[6].pb(-x-y+z);
  		ans[7].pb(-x-y-z);

  }
int check=0;
for(int i=0;i<8;i++)
{
	int sum=0;
	sort(ans[i].rbegin(),ans[i].rend());
	for(int val=0;val<M;val++)
	{
		sum+=ans[i][val];
	}
	check=max(check,sum);
}
cout<<check<<endl;
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   // #ifndef ONLINE_JUDGE
		 //  freopen("input.txt","r",stdin);
	  //   freopen("output.txt","w",stdout);
   // #endif
  int t;
  t=1;
  while(t--)
  {
  	solve();
  }


  return 0;
}