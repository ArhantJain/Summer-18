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
	ll int n,B,i,j,arr[200],cut[200]={0},even=0,odd=0,x,count=0;
	cin >> n >> B; // Number of Elements and No. of Bitcoins
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	j=0;
	for(i=0;i<n-1;i++)
	{
		if ( arr[i]%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		if( even == odd) // Cut can be done
		{
			x = abs(arr[i+1]-arr[i]); // Cost
			cut[j++] = x;
		}
	}
	sort(cut,cut+j);

	for(i=0;B>0,i<j;i++)
	{
		if( B >= cut[i])
		{
			B -= cut[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
