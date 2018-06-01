// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define endl "\n"
#define fr(i,n) for(int i=0;i<n;i++)
#define sz(a) (int)(a.size()) 
const int N = 512;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n,q;
	ll mat[N][N];
	cin >> q; 
	fr(x,q)
	{
		cin >> n; // Matrix size
		fr(j,2*n)
		{
			fr(k,2*n)
				cin >> mat[j][k];
		}
	
	ll sum =0;

	fr(i,n)
	{
		fr(j,n)
		{
			int r1,c1,r2,c2;
			r1 = i;
			r2 = 2*n-i-1;
			c1 = j;
			c2 = 2*n-j-1;
			sum += max( max(mat[r1][c1],mat[r1][c2]) , max(mat[r2][c1],mat[r2][c2]));
		}
	}
	cout << sum <<endl;
	}
	return 0;
}
