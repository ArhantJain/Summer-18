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
	int n,i,a,count=0;
	set <int> s; // Set will not enter duplicate element
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		if( a != 0)
			s.insert(a);
	}
	count = int(s.size());
	cout << count << endl;
	return 0;
}

