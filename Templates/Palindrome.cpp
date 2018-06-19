#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,remainder,reverse=0,temp;
	cin >> n; // Integer
	temp = n;
	while ( temp!=0)
	{
		remainder = temp%10;
		reverse = reverse*10 + remainder;
		temp = temp/10;
	}
//	cout << reverse<<endl;
	if(n==reverse)
		cout << "Yes, it is a Palindrome\n";
	else 
		cout << "No,it is not a Palindrome\n";
	return 0;
}
