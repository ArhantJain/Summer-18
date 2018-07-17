// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"

int main()
{
	int i,n,arr[200005],k;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	k=1;
	while ( 1 )
	{
		for(i=1;i<=n;i++,k++)
		{
			if ( arr[i] < k)
			{
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}
