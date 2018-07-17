#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j,l,count=0,arr[1000];
	cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	j=0;
	l=n-1;
	for(i=0;i<n;i++)
	{

		if(  arr[j] <= k)
		{
			count++;
			j++;
			continue;
		}
		else if ( arr[l] <= k)
		{
			count++;
			l--;
			continue;
		}
		else
			break;
	}
	cout << count << endl;
	return 0;
}
