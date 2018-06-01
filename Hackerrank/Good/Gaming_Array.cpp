// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

const int N = 1024;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test,size,x;
	cin >> test;

	for(int i=0;i<test;i++)
	{
		cin >> size;
		int arr[size];
		for(int j=0;j<size;j++)
			cin >> arr[j];

		int count=0,y;
		int z = size;
		int max=-1;
		while ( z != 0)
		{
			max = -1;
			for(int j=0;j<z;j++)
			{
				if(arr[j]>max)
				{
					max = arr[j];
					y = j;
				}
			}
			count++;
			z=y;
		}

		if(count%2 == 0)
			cout << "ANDY\n";
		else
			cout<<"BOB\n"; 
	}
	return 0;
}
