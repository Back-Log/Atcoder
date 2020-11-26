#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
#define int long long
void solve()
{
	int n;
	cin>>n;
  int arr[n];
  int k=0;
  for(int i=1;i<=n;i++)
  {
  	int a;
  	cin>>a;
  	arr[k++]= a-i;
  }
  sort(arr,arr+n);
  int b=arr[n/2];
  int sum=0;
  for(int i=0;i<n;i++)
  {
  sum+=abs(arr[i]-b);
  }
  cout<<sum<<endl;

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