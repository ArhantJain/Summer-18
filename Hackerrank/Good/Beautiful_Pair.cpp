// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

// Solution : You have to find a pair for every element from the first array in the second one.

//Let's denote the number of pairs = K.

//If K = N, then answer = K - 1, because you have to change one element, otherwise answer = K + 1.

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector <int> A,B;
	int n,i,j,count=0,ans,a,flag[1005]={0};
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		A.push_back(a);
	}
	for(i=0;i<n;i++)
	{
		cin >> a;
		B.push_back(a);
	}
	for(i=0;i<n;i++) // Problem when there is repetion in array B
	{
		for(j=0;j<n;j++)
		{
			if ( A[i] == B[j] && flag[j]==0) //flag[i] avoid count of same number in the array A
			{
				flag[j]=1;
				count++;
				break;
			}
		}
	}
	if ( count == n)
		ans = count-1;
	else
		ans = count + 1;
	cout << ans << endl;
	return 0;
}
