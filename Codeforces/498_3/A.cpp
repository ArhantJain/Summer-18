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
	ll int n,i,arr[1005],arr2[1005],j,sz;
	cin >> n;
	x=0;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		arr2[i]=arr[i];
	}
	sort(arr2,arr2+n);
	j=0;
	sz = n;
	while(sz)
	{
		for(i=0;i<n;i++)
		{
			if( arr[i] == arr2[j])
			{
				if(arr2[j]%2 != 0)  // Odd
				{
					arr[i]=arr2[j]+1;
				}
				else  // Even
				{
					arr[i] = arr2[j]-1;
				}
			}
		}
		j++;
		sz--;
	}
	for(i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
