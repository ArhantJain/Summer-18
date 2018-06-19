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
	char str[105];
	int i,n,flag=0;
	cin >> str;
	n = strlen(str);
	for(i=0;i<n-2;i++)
	{
		if( str[i]*str[i+1]*str[i+2] == 287430)
		{
			flag=1;
			break;
		}
	}
	if( flag==1)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}


