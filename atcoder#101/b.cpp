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
  
 string s;
 cin>>s;
 int sum=0;
 for(int i=0;i<s.size();i++)
 {
 	sum+=(s[i]-'0');
 }
if(stoi(s)%sum==0)
{
	cout<<"Yes"<<endl;
}
else
{
	cout<<"No"<<endl;
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