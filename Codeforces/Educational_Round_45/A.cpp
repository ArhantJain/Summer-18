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
	ll int n,m,a,b,x,y,x1,y1,ans=-1;
	cin >> n >> m >> a  >> b ; 
	if( n%m == 0)
		cout << "0\n";
	else
	{
		x = n%m; // Down
		y = m-x; // Up
		
		x1 = x*b;
		y1 = y*a;

		ans = min(x1,y1);
		cout<< ans << endl;
	}
	return 0;
}

