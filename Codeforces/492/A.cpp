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
	ll int n,count=0;
	cin >> n;
	while(n!=0)
	{
		if( n>= 100)
		{
			n = n-100;
			count++;
		}
		else if( n >= 20)
		{
			n = n - 20;
			count++;
		}
		else if( n >= 10)
		{
			n = n - 10;
			count++;
		}
		else if( n>=5)
		{
			n = n - 5;
			count++;
		}
		else if ( n >= 1)
		{
			n = n - 1;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
	
