// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count_link=0,count_pearl=0,i;
	string a;
	char b='-',c='o';
	cin >> a;
	n =a.size();
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
			count_link++;
		else if(a[i]== c)
			count_pearl++;
	}
	if(count_pearl == 0)
		cout << "Yes\n";

	else if(count_link % count_pearl == 0)
		cout << "YES\n";
	else 
		cout <<  "NO\n";
	return 0;
}
