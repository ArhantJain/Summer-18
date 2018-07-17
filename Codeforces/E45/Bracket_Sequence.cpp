// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"
const int N=1e6+5;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int i,l,count=0,ans=0;
	string  str;
	cin >> str;
	l = str.size();
	for(i=0;i<l;i++)
	{
		if( str[i] == '(')
			count++;

		else if( count > 0 && str[i] == ')')
		{
			ans +=2;
			count--;
		}
	}
	cout << ans  << endl;
	return 0;
}
