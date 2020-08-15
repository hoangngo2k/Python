#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b)
{
	if(a==0) return b;
	return UCLN(b%a,a);
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i>=j) cout<<n-j+1;
			else cout<<n-i+1;
		}
		cout<<endl;
	}
	int a,b;
	cin>>a>>b;
	cout<<UCLN(a,b);
	cout<<endl;
}

