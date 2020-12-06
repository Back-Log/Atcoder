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
//   string s,t;
//   cin>>s>>t;
//   char ch=s[0];
//   string part1="";
//   bool flag=false;
//   string part2="";
//   for(int i=0;i<t.size();i++)
//   {
//   	if(t[i]==ch)flag=true;
//   	if(!flag)
//   	{
//      part2+=t[i];
//   	}
//   	else
//   	{
//   		part1+=t[i];
//   	}
//   }
 
// string ans=part1+part2;
// // cout<<ans<<endl;
// if(ans==s)
// {
// 	cout<<"Yes"<<endl;
// }
// else
// {
// 	cout<<"No"<<endl;
// }
	string s,t;
	cin>>s>>t;
	string check=s+s;
	// if the rotated string is the substring of check string than ans=Yes else No
	if(check.find(t)!=string::npos)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}


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