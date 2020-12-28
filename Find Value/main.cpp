#include <bits/stdc++.h>
using namespace std;

void bin_search(int *,int,int);

int  main()
{	ios_base:: sync_with_stdio(0);
	cin.tie(0);

	int A[]={12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
	int find;
	// printf("%d\n",length.A(A));

	
	scanf("%d",&find);

	sort(A,A+15);
	bin_search(A,15,find);
	return 0;
}

void bin_search(int A[],int N,int find)
{
	int l=0,u=N,m;
	while(l<=u)
	{
		m = (l+u)/2;
		if(A[m]==find)
		{
			printf("\nSearch successfully!");
			return;
		}
		else if(A[m]<find)
		{
			l = m+1;
		}
		else
		{
			u =m-1;
		}
	}
	printf("\nSearch uncessfully!");
}
