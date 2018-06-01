// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int arr[2000]={0},i,n,ans;
	char str[103];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> str;
		arr[str[0]]=1;
	}
	ans=6-n;
	cout << ans<<endl;

		if(arr['p']==0)
			cout <<"Power\n";
		if(arr['g']==0)
			cout <<"Time\n";
		if(arr['b']==0)
			cout << "Space\n";
		if(arr['o']==0)
			cout << "Soul\n";
		if(arr['r']==0)
			cout <<"Reality\n";
		if(arr['y']==0)
			cout << "Mind\n";
	
	return 0;
}



