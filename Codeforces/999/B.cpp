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
	ll int n,i;
	string str;
	cin >> n;
	cin >> str;
	for(i=1;i<=n;i++)
	{
		if( n%i == 0)
		{
			reverse(str.begin(),str.begin()+i);
		}
	}
	cout << str << endl;
	return 0;
}






























		



