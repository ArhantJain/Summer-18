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
	ll int sum=0,n,i,j,mat[4][3005],k;
	pair<long long int,pair<long long int,long long int>> P[3005];
	cin >> n;
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> mat[i][j];
			if(i==1)
			{
				P[j].first = mat[i][j];
			}
			if(i==0)
			{
				P[j].second.first = j;
				P[j].second.second = mat[i][j];
			}

		}
	}

	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(P[i]>P[j])
				swap(P[i],P[j]);
		}
	}
	//		for(i=0;i<n;i++)
	//		{
	//			cout << P[i].first<<" "<<P[i].second.first<<" " <<P[i].second.second<<endl;
	//		}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{

				if((P[i].first<P[j].first && P[j].first<P[k].first) && (P[i].second<P[j].second && P[j].second<P[k].second))
					sum = mat[1][i] + mat[1][j] + mat[1][k];
			}
		}
	}
	if ( sum !=0)
		cout << sum << endl;
	else 
		cout << "-1\n";

	return 0;
}
