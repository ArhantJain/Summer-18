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
	int i,test,n,j,k,arr[10005],min;
	cin >> test;
	for(k=0;k<test;k++)
	{
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> arr[j];
		}

		sort(arr,arr+n);
		for(i=0;i<n-1;i++)
		{
			min = arr[i];
			for(j=i;j<n;j++)
			{
				arr[j] = arr[j]-min;
			}
		}
		int ans = 0,count=0;
		while ( arr[n-1] != ans)
		{
			if(arr[n-1]-ans >= 5)
			{
				ans += 5;
				count++;
			}
			else if( arr[n-1]-ans >= 3 && arr[n-1]-ans < 5)
			{
				ans +=3;
				count++;
			}
			else if ( arr[n-1]-ans < 3)
			{
				ans +=1;
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
