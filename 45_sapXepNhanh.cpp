/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v.at(i);
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
			cout<<v.at(i)<<" ";
		cout<<endl;
	}
	return 0;
}

