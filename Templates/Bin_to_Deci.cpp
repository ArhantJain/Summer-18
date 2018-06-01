// Satyameva Jayate

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0,i; 
	string str;

	cin >> str;
	n = str.size();
	for(i=n-1;i>=0;i--)
	{
		if(str[i]=='1')
			ans = ans + pow(2,i);
	}

	cout<<ans<<endl;
	return 0;
}

