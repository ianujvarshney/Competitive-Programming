 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 int main()
 {
 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	cout.tie(NULL);
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n;
 		cin>>n;
 		int a[n];
 		for(int  i=0;i<n;i++)
 		{
 			cin>>a[i];
 		}
 		sort(a,a+n);
 		cout<<a[0]+a[1]<<"\n";
 	}
 	
 	
 	return 0;
 }