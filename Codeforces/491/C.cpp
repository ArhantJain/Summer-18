// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"

ll int check(ll int n,ll int k)
{
	ll int curr = n;
	ll int sum  = 0;
	while( curr >0)
	{
		ll int o = min(curr,k);
		sum += o;
		curr -= o;
		curr -= curr/10;
	}
	if( 2*sum >= n)
		return 1;
	else 
		return 0;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int n,ans,l,r,k;
	cin >> n;
	ans = n;
	l = 1;
	r = n;
	while(l<=r)
	{
		k = r + (l-r)/2;
		if( check(n,k))
		{
			ans = k;
			r = k-1;
		}
		else
		{
			l = k+1;
		}
	}
	cout << ans << endl;
	return 0;
}
