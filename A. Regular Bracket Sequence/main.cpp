#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void find_min(ll*,ll ,ll);

int  main()
{	ios_base:: sync_with_stdio(0);
	cin.tie(0);

	ll t,A[10000];

	cin>>t;
	
    for(ll i=0;i<t;i++)
	{
		cin>>A[i];
	}

    ll n = sizeof(A)/sizeof(A[0]);

    ll k;

    sort(A,A+n);
    for(ll i=0;i<n;i++)
    {
    cout<<A[i];
    }
    find_min(A,n,k);
   


	return 0;
}	

void find_min(ll A[],ll n, ll k)
{
	ll i,c,m=1;
	for(i=0;i<n;i++)
	{
		if(A[i]==A[i+1])
		{	
			c = A[i];
			m++;
			
			if(m==k)
			{
				cout<<c;
			}
            else if(A[i]!=A[i+1]){
                m--;
            }
		}
	}
}