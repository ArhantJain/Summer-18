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
	ll int sum=0,sum2=0,arr[100],n,i,j;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if( n == 1)
	{
		cout << "-1\n";
	}
	else if( n == 2 && arr[1]==arr[2])
	{
		cout << "-1\n";
	}
	else
	{
		if( sum%2 != 0)
		{
			cout << "1\n";
			cout << "1\n";
		}
		else
		{
			i=1;
			while(1)
			{
				sum2 += arr[i];
				if( sum2 != sum/2)
				{
					cout<<i<< endl;

					for(j=1;j<=i;j++)
					{
						cout << j <<" ";
					}

					cout << endl;
					break;
				}
				i++;
			}
		}
	}
	return 0;
}

