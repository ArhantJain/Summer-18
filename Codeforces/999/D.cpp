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
	ll int ;
	int rem[300000]={0};
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	x = n/m;
	for(i=0;i<n;i++)
	{
		a = arr[i]%m;
		rem[a]++;
	}
	for(i=0;i<m-1;i++)
	{
		if( rem[i] != x)
		{
			if(rem[i] > x)
			{
				y = rem[i]-x;
				pos[i] = y; // Excess in remainder i is of order y
			}
			else if( rem[i] < x)
			{
				y = x - rem[i];
				neg[i] = y; // Deficiency in remainder i is of order y
			}
		}
	}
	for(i=0;i<m-1;i++)
	{














