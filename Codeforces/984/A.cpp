// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int i,n,arr[1005] ;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
//	for(i=0;i<n;i++)
//		cout <<  arr[i]<<" ";
//	cout << endl;

	if( n%2 == 0)
		cout << arr[n/2-1];
	else
		cout << arr[(n-1)/2];

	cout << endl;
	return 0;
}


