#include <bits/stdc++.h>
using namespace std;

void pairsort(int a[],int b[],int n)
{
	pair <int,int> pa[n];
	int i;	
	for(i=0;i<n;i++)
	{
		pa[i].first = a[i];
		pa[i].second = b[i];
	}
	sort(pa,pa+n);
	for(i=0;i<n;i++)
	{
		a[i] = pa[i].first;
		b[i] = pa[i].second;
	}
}

int main()
{
	int n,i,a[100],b[100] ;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> b[i];
	}
	pairsort(a,b,n);
	for(i=0;i<n;i++)
	{
		cout <<  a[i]<<" ";
	}
	cout << endl;
	for(i=0;i<n;i++)
	{
		cout <<  b[i]<<" ";
	}
	cout << endl;
	return 0;
}
	
