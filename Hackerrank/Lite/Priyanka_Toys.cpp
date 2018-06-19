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
	int n,i,W[100005],count,x;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> W[i];
	}
	sort(W,W+n);
	x = W[0]+4;
	count=1;
	for(i=0;i<n;i++)
	{
		if(W[i] > x)
		{
			x = W[i]+4;
			count++;   // Next Box started
		}
	}
	cout << count << endl;
	return 0;
}
