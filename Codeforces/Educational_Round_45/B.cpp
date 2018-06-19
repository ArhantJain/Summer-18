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
	int n,k,i,j=0,x,arr[500006],e=-100,flag[1000005]={0};
	cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> x;
		if(flag[x]==0)
			arr[j++]=x;
		flag[x]++;
	
	}
	sort(arr,arr+j);

	for(i=0;i<j;i++)
	{
		if(arr[i+1]>arr[i] && arr[i]+k >= arr[i+1])
		{
			arr[i]  = e; // e = error
		}
	}
	int count=0;
	for(i=0;i<j;i++)
	{
		if( arr[i] != e)
		{
			count += flag[arr[i]];
		}
	}
	cout << count << endl;
	return 0;
}
