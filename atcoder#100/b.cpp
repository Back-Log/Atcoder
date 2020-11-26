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
  
 int d,n;
 cin>>d>>n;
 if(d==0)
 {
 	if(n==100)
 	{
 		cout<<101;
 	}
 	else
 	{
 		cout<<n;
 	}
 }
 else if(d==1)
 {
 	if(n==100)
 	{
 		cout<<101*100;
 		return;
 	}
 	cout<<n*100;
 }
 else
 {
 	if(n==100)
 	{
 		cout<<101*10000;
 		return;
 	}
 	cout<<10000*n;
 }
cout<<endl;

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