#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
#define int long long
#define f first
#define s second
void solve()
{
  int n,m;
  cin>>n>>m;
  pair<int,int>v[m];            
  int ok=-1e10;
  for(int i=0;i<m;i++)
  {
    int a,b;
    cin>>a>>b;
    v[i]={a,b};
  }
  sort(v,v+m);
 int ans=0;
 for(int i=0;i<m;i++)
 {
   ok=min(ok,v[i].s);
   if(v[i].f>=ok)
   {
    ans++;
    ok=v[i].s;
   }
  


 }

  cout<<ans<<endl;

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