#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp;
	cin >> n >> m;
	vector<int> v1;
	for(int i=0;i<n;i++){
		cin >> temp;
		v1.push_back(temp);
	}
	sort(v1.begin(),v1.end());
	double max1=0;
	if(v1[0]!=0) max1=(double)(v1[0]);
	if(v1[n-1]!=m) max1=max(max1,(double)(m-v1[n-1]));
	for(int i=0;i<n-1;i++){
		max1=max(max1,(double)(v1[i+1]-v1[i])/(double)2.0);


	}
	cout << fixed;
	cout << setprecision(10) << max1 << endl;
	return 0;
};