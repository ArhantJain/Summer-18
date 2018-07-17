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
	int i,n,k,j;
	ll int hash[200]={0};
	string str;
	cin >> n >> k;
	cin >> str;
	for(i=0;i<n;i++)
	{
		hash[str[i]-'a']++;
	}
	for(i=0;i<27;i++)
	{
		if ( k > hash[i])
			k -= hash[i];
		else
			break;
	}

	for(j=0;j<n;j++)
	{
		if ( k >=n )
			return 0;

		if ( str[j] > i+'a')
		{
			cout << str[j];
		}
		else if ( str[j] == i+'a')
		{
			if( k > 0)
				k--;
			else
				cout << str[j];
		}
	}
	cout << endl;
	return 0;
}





