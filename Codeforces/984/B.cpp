// Satyameva Jayate 

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m,flag=0;
	char arr[500][500];
	cin >> n >> m; // N rows and m columns
	for(i=0,j=0;j<=m+2;j++)
	{
		arr[i][j] =0;
	}
	for(j=0,i=0;i<=n+2;i++)
		arr[i][j] =0;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin >> arr[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if( arr[i][j] == '.')
			{
				if( arr[i][j+1]=='*' || arr[i][j-1]=='*' || arr[i-1][j]=='*' || arr[i+1][j]=='*' ||  arr[i+1][j+1]=='*' ||  arr[i+1][j-1]=='*' || arr[i-1][j+1]=='*' ||  arr[i-1][j-1]=='*')
				{
					flag=1;
					break;
				}
			}
			else if ( arr[i][j] != '*')
			{
				
				int count = arr[i][j]-'0' ,count2=0;
		//		cout << arr[i][j]<<endl;
				int x = i-1;
				while(x<= i+1)
				{
					int y=j-1;
					while(y<= j+1)
					{
			//		cout <<"x "<<x<<" y "<<y<<endl;
						if(arr[x][y] == '*')
							count2++;
						y++;
					}
					x++;
				}
			//	cout<<"c2 "<<count2<<" count "<<count<<endl;
				if( count2 != count)
				{
					flag=1;
					break;
				}
			}
		}
	}
	if ( flag == 0 )
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}










