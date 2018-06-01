// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,s,i,x,y,a,b;
	int time[500];

	cin >> n >> s; // No. of planes going to land and minutes between two landings
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		time[i] = 60*a + b;
	}
	x = 2*(s+1);
	if( time[0]>s)
		cout<<"0 0\n";
	else
	{
		for(i=1;i<n;i++)
		{
			y = time[i]-time[i-1];
			if( y >= x)
				break;
		}

		int t1,t2,t3;
		t1 = time[i-1]+s+1;
		t2 = t1/60;
		t3 = t1%60;
		cout << t2 <<" "<<t3<<endl;
	}
	return 0;
}
