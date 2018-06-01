// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long int n,x;
	cin >> n; // i.e n friends and n+1 cuts required
	x = n+1; // no. of cuts required
	if( n == 0)
		{
		   cout<<"0\n";
		   return 0;
		}
	else if(x%2 == 0)
		cout << x/2;
	else
		cout << n+1;
	cout << "\n";
	return 0;
}
