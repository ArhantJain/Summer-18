#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define pr(n) printf("%d",n)
#define prl(n) printf("%lld",n)
#define nl printf("\n")
#define fr(i,n) for(i=0;i<n;i++)

typedef long long ll;
typedef pair<int,int> pii;
const int N = 300010;  // Limit is 3X10^5
ll mod = 1e9+7;
ll pos[N],neg[N];
string s;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t=1,n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		int len = s.length();
		int cur = 0;
		int mn =0;
		for(int j=0;j<len;j++)
		{
			if(s[j]=='(')cur++;
			else cur--;
			mn = min(mn,cur);
		}
		if(mn>=0)
		{
			pos[cur]++;
		}
		else
		{
			if(cur<0 && (-cur)>=(-mn))
				neg[-cur]++;
		}
	}
	ll num = pos[0];
	ll ans = (num*num);
	for(int i=1;i<N;i++)
	{
		ans += (pos[i]*neg[i]);
	}
	cout<<ans<<"\n";
	return 0;
}
