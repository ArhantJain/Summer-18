// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int test,size;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		cin >> size;
		int arr[size];
		for(int j=0;j<size;j++)
		{
			cin >> arr[j];
		}
		int max=-1;
		int count=0;
		for(int j=0;j<size;j++)
		{
			if(arr[j]>max)
			{
				max = arr[j];
				count++;
			}
		}
		if(count%2 == 0)
			cout<<"ANDY\n";
		else
			cout<<"BOB\n";
	}
	return 0;
}

