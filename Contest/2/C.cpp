// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int sum[200005],i,k,j,n,a;
	vector <int> V[200005];
	cin >> k; // No. of sequences
	
	for(i=0;i<k;i++)
	{
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> a;
			V[i].push_back(a);
			sum[i] += V[j];
		}
	}
