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
	ll int a,b,c,n,x,A,B,C;
	cin >> a >> b >> c >> n;
	A = a-c;
	B = b-c;
	C = A+B+c; // Student who have passed
	x = n - C;
	if( x <1 || A<0 || B <0)
		cout << "-1" ;
	else
		cout << x;
	cout << endl;
	return 0;
}
