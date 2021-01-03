#include <bits/stdc++.h>
using  namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a[5][5],i,j,r,c;
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
				{
					r = abs(2-i);
					c = abs(2-j);
					cout<<r+c;
				}
			}
		}


	return 0;
}