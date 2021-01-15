 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 int main()
 {
 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	string n;
 	cin>>n;
 	int s=0,g=0;
 	for(int i=0; i<n.size(); i++)
 	{
    if(int(n[i])>=97 && int(n[i])<=122) s++;  

    else if(int(n[i])>=65 && int(n[i])<=90) g++;	
 	}
 	if(s<g)
 	{
 		transform(n.begin(), n.end(), n.begin(), ::toupper); 
 		cout<<n;
 	}
 	else if(s>g)
 	{
 		transform(n.begin(), n.end(), n.begin(), ::tolower); 
 		cout<<n;
 	}
 	else if(s==g){
 		transform(n.begin(), n.end(), n.begin(), ::tolower); 
 		cout<<n;
 	}

 	return 0;
 }