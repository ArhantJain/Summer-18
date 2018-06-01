//Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	long long int n,j=0,arr[100],flag[1005]={0},arr2[100];
	cin >>  n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{

		if(flag[arr[i]] == 0)
		{
			arr2[j++] = arr[i];
		}
		flag[arr[i]]=1;
	}
	cout << j << endl;
	for(int i=j-1;i>=0;i--)
	{
		cout << arr2[i]<<" ";
	}
	cout << endl;
	return 0;
}
