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
	ll int i,n,arr[200],max=-1,flag[200]={0};
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<n;i++)
	{
		 flag[arr[i]]++;
	}
	for(i=0;i<200;i++)
	{
		if( flag[i] > max)
			max = flag[i];
	}
	cout << max << endl;
	return 0;
}
