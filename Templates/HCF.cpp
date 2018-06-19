// Inbuit function : __gcd(a,b) ( Beware:Remember the case of __gcd(0,0) and handle on your own )

// This implementation( below one) is faster than the inbuilt



#include <bits/stdc++.h>
using namespace std;

int hcf ( int a, int b)
{
	if ( a == b)
		return a;
	else if( a>b)
		return hcf(a-b,b);
	else
		return hcf(a,b-a);
}


int main()
{
	int a,b,ans;
	cin >> a >> b;
	ans = hcf(a,b);
	cout << ans << endl;
	return 0;
}
