#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,x;
	cin>>n;
	vector <int>v;
    for(int i=0;i<n;i++)
	{
	    cin>>x;
	    v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(auto it=v.begin();it!=v.end();it++)
	{
	    cout<<*it<<" ";
	}
	return 0;
}
