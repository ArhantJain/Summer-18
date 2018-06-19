// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"
const int N=1e5+5;
ll int P[N];

void pairsort(long long int P[],long long int C[],long long int n)
{
	pair <long long int,long long int> pa[n];
	int i;	
	for(i=1;i<=n;i++)
	{
		pa[i].first = P[i];
		pa[i].second = C[i];
	}
	sort(pa,pa+n);
	for(i=1;i<=n;i++)
	{
		P[i] = pa[i].first;
		C[i] = pa[i].second;
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll int n,k,C[N],i;
	cin >> n >> k;
	for(i=1;i<=n;i++)
	{
		cin >> P[i]; // Power
	}
	for(i=1;i<=n;i++)
	{
		cin >> C[i]; // Coins
	}
	P[0]=0;
	C[0]=0;
	pairsort(P,C,n);
	// k victim

	for(i=0;i<k;i++)
	{
		ans[i]=C[i];
	}
	int x;
	for(i=n;i>=1;i--)
	{
		x=k;
		while(x--)
		{
			C[i] += 



	
	return 0;
}
