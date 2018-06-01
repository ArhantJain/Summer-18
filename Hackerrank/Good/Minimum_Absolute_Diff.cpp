// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,arr[100005],diff[100005],mi=1e10;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	diff[0]=1e9;
	for(int i=1;i<n;i++)
	{
		diff[i]=arr[i]-arr[i-1];
	}
	for(int i=1;i<n;i++)
	{
		if(diff[i] < mi)
			mi = diff[i];
	}
	cout << mi<<endl;
	return 0;
}
