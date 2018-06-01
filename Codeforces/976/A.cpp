// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,count1=0,count0=0;
	char str[200];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> str[i];
		if(str[i] == '1')
			count1++;
		else
			count0++;
	}
	if (count1>=1)
	{
		cout<<1;
		for(i=0;i<count0;i++)
			cout<<0;
	}
	else
			cout<<0;
	cout << endl;
	return 0;
}
