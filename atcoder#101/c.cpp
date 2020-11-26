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
  
double n,k;
cin>>n>>k;
 int x;
 for(int i=0;i<n;i++)
 {
 	cin>>x;
 }
int ans=1;
int extra=ceil((n-k)/(k-1));
// cout<<extra<<endl;
cout<<ans+extra<<endl;




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