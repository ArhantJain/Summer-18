// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int i,n,arr[205],j,ans=0;
	cin >> n; // No. of Couples
	for(i=1;i<=2*n;i++)
	{
		cin >> arr[i];
	}
	for(i=2;i<=2*n;i+=2)
	{
		for(j=i;j<=2*n;j++)
		{
			if( arr[j] == arr[i-1])
				break;
		}
		for(;j>i;j--)
		{
			swap(arr[j-1],arr[j]);
			ans++;
		}
	}
	for(i=1;i<=2*n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << ans << endl;
	return 0;
}

	

