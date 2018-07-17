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
	ll int n,x,y,o,z,i,cost=0;
	string str;
	cin >> n >> x >> y;
	cin >> str;
	char c = 'a';
	o=0; // Count of one continuous
	z=0; // Count of zero continuous
	for(i=0;i<n;i++)
	{
		if( c != str[i])
		{
			if( str[i] == '1')
			{
				c = '1';
				o++;
			}
			else
			{
				c ='0';
				z++;
			}
		}
	}
	if( z == 0)
	{
		cout << "0\n";
		return 0;
	}
	else
	{
		if( x < y) // i.e Reversing is Judicious
		{
			cost += x*(z-1); // Cost of making all zeros together
			cost += y;
		}
		else   // Inversion is Judicious
		{
			cost += y*z;
		}
	}
	cout << cost << endl;
	return 0;
}
