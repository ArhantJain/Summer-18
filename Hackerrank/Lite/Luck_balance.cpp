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
	ll int n,i,j,k,l,a,b,arr[105],sum=0;
	cin >> n >> k;
	j=0;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		if ( b==0)
			sum +=a;
		else
		{
			arr[j++]=a;
		}
	}
	sort(arr,arr+j);
	for(i=0;i<j;i++)
	{
		sum += arr[i];
	}
	l = j-k;  //l : Match to win
		  //j : Total Important Matches
		  //k : Max.Imp Matches she can lose
	for(i=0;i<l;i++)
	{
		sum = sum - 2*arr[i];
	}
	cout << sum << endl;
	return 0;
}
