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
	int n,m,i,j,X[100],Y[100];
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		cin >> X[i];
	}
	for(i=0;i<m;i++)
	{
		cin >> Y[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(X[i]==Y[j])
				cout<<Y[j]<<" ";
		}
	}
	cout << endl;
	return 0;
}


