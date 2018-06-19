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
	ll int l,r,x,y,num,p,a,b;
	cin >> l >> r >> x >> y;
	// a = HCF*c;
	// b = HCF*d; such that gcd(c,d) = 1

	// & a*b = HCF*LCM
	//  c*d = LCM/HCM

	if ( y%x != 0)
	{
		cout << "0\n";
		return 0;
	}

	num = y/x; // which is equal to c*d
	// Aim to find pair c & d and multiply it by HCF to obtain a & b

	p = sqrt(num); // Reason : as p is not prime therefore , p = a*b. Thus,if both a & b are greater than root of n then product will be greater than n, therefore one factor must be smaller than root of n.Thus, other factor ( p/i) will be greater than root of n.

	// Also, p = a*b, Aim is to find factors. Let say a=b.Therefore p >= a^2 , a <= sqrt(p).Therefore to find a,iterate only from 1:sqrt(n)


	ll int i,req,count=0;
	for(i=1;i<=p;i++)
	{
		if ( num%i == 0)
		{
			req = num/i;
			if( __gcd(req,i)==1)
			{
				a = req*x;
				b = i*x;
				if( a<=r && b <=r && a>=l && b>=l)
				{
					count +=2;

					if( a == b)
						count--;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
