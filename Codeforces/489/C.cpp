// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"

const ll int MOD=1e9+7;

ll int fast_pow(ll a, ll exp) // a^exp
{
	ll res = 1; // Result
	while(exp)
	{
		if(exp & 1) // Number is odd
			res = (res * a) % MOD;

		a = (a * a) % MOD;
		exp >>= 1;  // Right Shift Operator i.e exp ko 1 bit right shift ( i.e divide by two)
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int x,k,ans,t1,t2;
	cin >> x >> k;
	if ( x == 0)
	{
		cout << x << endl;
		return 0;
	}
	else  // 2^(K+1)*x - 2^k + 1 is the expected k+1 term
	{
		if ( k == 0)
		{
			ans = (2*x)%MOD;
		}
		else
		{
			x = x%MOD;
			t1 = (fast_pow(2,k+1)*x)%MOD; // term 1
			t2 = (fast_pow(2,k))%MOD;   // term 2

			ans = (t1-t2+1+MOD)%MOD;
		}
	}
	cout << ans << endl;
	return 0;
}
