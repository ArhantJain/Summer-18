// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"
const int mod=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int x,k,sum=0; 
	cin >> x >> k; // Initial no. of dress and months
	while ( k--)
	{
		sum += x%mod;
		x = (x%mod)*2-1;
	}

	cout << (sum/(k+1))%mod;
	cout << endl;
	return 0;
}
