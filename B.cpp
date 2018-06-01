// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d double 
#define endl "\n"
const long long int N=1e9;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int y;
	double a1,a2,x;
	cin >> x >> y;
	a1 = y/(double)x;
	a2 = (log(y)/log(x));
	if(a1 < a2)
		cout <<"<";
	else if(a1 > a2)
		cout <<">";
	else
		cout <<"=";
	cout << endl;
	return 0;
}



