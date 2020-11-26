#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back

void solve()
{
  
 ll k;
 cin>>k;
 ll ans=19,inc=10;
 for(ll i=1;i<=k;i++)
 {
   if(i<10)
   {
   	cout<<i<<endl;
   }
   else
   {
     cout<<ans<<endl;
     ans+=inc;
   }
   if(ans==99)
   {
   	// ans+=100;
   	inc=100;
   }

 }



}
int main()
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