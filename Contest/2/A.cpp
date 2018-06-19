// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int arr2[10005],flag[10005]={0},count=0,i,j=1,n,k,arr[10005];
	cin >> n >> k;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
		if( flag[arr[i]] == 0)
		{
			flag[arr[i]]=1;
			arr2[j++]=i;
			count++;
		}
	}
	if(count>=k)
	{
		cout << "YES\n";
		for(i=1;i<=k;i++)
		{
			cout << arr2[i]<<" ";
		}
		cout <<endl;
	}
	else
	{
		cout <<"NO\n";
	}
	return 0;
}
