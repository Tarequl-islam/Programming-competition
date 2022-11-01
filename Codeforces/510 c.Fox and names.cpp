#include <iostream>
#include <vector>
using namespace std;
bool u[303],w[303],q;
vector<int> g[300];
int tot;
int a[103];
void dfs(int i){
	u[i]=true;
	w[i]=true;
	for (int j=0;j<g[i].size();j++){
		int k=g[i][j];
		if (!u[k])dfs(k); else if (w[k])q=false;
	}
	w[i]=false;
	a[++tot]=i;
}
int main(){
	q=true;
	int n,i,j;
	cin>>n;
	string s[n];
	for (i=0;i<n;i++){
		cin>>s[i];
	}
	for (i=1;i<n;i++){
		int m1=s[i-1].size();
		int m2=s[i].size();
		for (j=0;j<m1&&j<m2&&s[i-1][j]==s[i][j];j++);
		if (j<m1&&j<m2)g[s[i-1][j]-'a'].push_back(s[i][j]-'a');else if (m1>m2)q=false;
	}
	for (i=0;i<26;i++){
		if (!u[i])dfs(i);
	}
	if (q){
		for (i=tot;i>0;i--){
			char c='a'+a[i];
			cout<<c;
		}
	}
	else{
		cout<<"Impossible";
	}
	return 0;
}