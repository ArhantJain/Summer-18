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
	ll int n,i,j,k,arr[100],a,b,c,flag=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(i=n-1;i>=2;i--)
	{
		for(j=i-1;j>=1;j--)
		{
			for(k=j-1;k>=0;k--)
			{
				a = arr[i];
				b = arr[j];
				c = arr[k];

				if ( a+b>c && b+c>a && c+a>b)
				{
					flag=1;
					cout << c <<" "<<b<<" "<<a<<endl;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		if( flag == 1)
			break;
	}
	if( flag==0)
		cout <<"-1\n";
	return 0;
}
