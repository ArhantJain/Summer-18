// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	char x;
	int grid[105][105]={0},i,test,j,n,k;
	cin >> test;
	for(k=0;k<test;k++)
	{
		int flag=0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin >> x; // character
				grid[i][j]=x;
			}
		}
		
/*		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout << grid[i][j]<<" ";
			}
			cout << endl;
		}
		
*/		
		for(i=0;i<n;i++)
			sort(grid[i],grid[i]+n);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(grid[j][i] >  grid[j+1][i])
				{
					flag=1;
					break;
				}
			}
			if( flag==1)
				break;
		}
		if(flag == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
 
	}
	return 0;
}
