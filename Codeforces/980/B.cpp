// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int count=0,n,k,x,i,j;
	cin >> n >> k; // No. of Columns and hotels
	x = n-2;
	if( k > x)
		cout << "NO\n";
	else
	{
		cout<<"YES\n";
		for(i=0;i<4;i++)
		{
			for(j=0;j<n;j++)
			{
				if((i==1 && j>=1) && count<k)
				{
					cout<<"# ";
					count++;
				}
				else

					cout<<". ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
