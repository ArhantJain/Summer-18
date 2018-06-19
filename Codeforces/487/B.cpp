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
	int i,p,n;
	string str;
	bool flag=0;
	cin >> n >> p; // Length and Period 
	cin >> str;
	for(i=p;i<n;i++)
	{
		if ( str[i]=='.' && str[i-p]=='.') // Both are .
		{
			str[i]='0';
			str[i-p]='1';
			flag=1;
			break;
		}
		else if ( str[i] == '.') // ith one is . and i-p is number
		{
			str[i] = ( '1'-str[i-p]) + '0';
			flag=1;
			break;
		}
		else if ( str[i-p] == '.') // i-p is . and ith is number
		{
			str[i-p]= ( '1' - str[i]) + '0';
			flag=1;
			break;
		}
		else if( str[i] != str[i-p])
		{
			flag=1;
				
			break;
		}
	}
	if( flag==0)
		cout <<"No\n";
	else
	{
		for(i=0;i<str.size();i++)
		{
			if( str[i] == '.')
				str[i]='0';
		}
		cout << str<<endl;
	}
	return 0;
}
