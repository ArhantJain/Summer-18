// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

long long int candies(vector <int> &ratings)
{
	long long int sum,size,i;
	size = ratings.size();
	if ( size == 1)
		return size;

	vector <int> cand(size,1);
	for(i=1;i<size;i++)
	{
		if( ratings[i-1]<ratings[i])
			cand[i] = cand[i-1]+1;
	}
	for(i=size-1;i>0;i--)
	{
		if( ratings[i-1]>ratings[i])
			cand[i-1] = max(cand[i]+1,cand[i-1]);
	}
	sum =0;
	for(i=0;i<size;i++)
	{
		sum += cand[i];
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long int n,i,ans,a;
	vector <int> rating;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		rating.push_back(a);
	}
	ans = candies(rating);
	cout << ans << endl;
	return 0;
}
