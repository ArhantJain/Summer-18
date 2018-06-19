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
	int count=0,max=-1,i,j,k,n,arr[200];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				if( arr[k] == 0)
				{
					count++;
				}
			}
			if(count > max)
			{
				max = count;
			}
			count=0;
		}
	}
	cout << max << endl;
	return 0;
}
