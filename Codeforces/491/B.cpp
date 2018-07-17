// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld  long double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int a,i,n,arr[105],sum=0 ,count=0;
	ld avg;
	cin >> n; // Subjects
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n);
	i=0;
	while(1)
	{
		a = 5-arr[i];
		if( 2*sum < 9*n)
		{
			sum += a;
			count++;
		}
		else
			break;
		i++;

	}
	cout << count << endl;
	return 0;
}
