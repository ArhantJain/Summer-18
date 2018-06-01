// Satyameva Jayate 

#include <bits/stdc++.h>
using namespace std;
int main()
	{
		// Inversion : arr[i]>arr[j] , i<j
		int i,j,n,count=0,arr[100]; 
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if( arr[i]>arr[j])
					count++;
			}
		}
		cout << count << endl;
		return 0;
	}
