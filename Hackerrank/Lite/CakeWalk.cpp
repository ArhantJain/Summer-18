// Satyameva Jayate 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll int n,i,arr[1005],sum=0 ;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n/2;i++)
	{
		swap(arr[i],arr[n-1-i]);
	}

	for(i=0;i<n;i++)
	{
		sum += pow(2,i)*arr[i];
	}
	cout << sum << endl;
	return 0;
}
