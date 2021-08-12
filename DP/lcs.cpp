#include<iostream>
using namespace std;

//MEMOIZATION
int lcs_memo(string s, string t, int **ans){
	if(s.size() == 0 || t.size() == 0){
		return 0;
	}
	int m = s.size();
	int n = t.size();
	if(ans[m][n] != -1){
		return ans[m][n];
	}
	if(s[0] == t[0]){
		ans[m-1][n-1] = lcs_memo(s.substr(1), t.substr(1), ans);
		ans[m][n] = 1 + ans[m-1][n-1];
	}
	else{
		ans[m][n-1] = lcs_memo(s, t.substr(1), ans);
		ans[m-1][n] = lcs_memo(s.substr(1), t, ans);
		ans[m][n] = max(ans[m][n-1], ans[m-1][n]);
	}
	return ans[m][n];
}

int lcs_memo(string s, string t){
	int m = s.size();
	int n = t.size();
	int **ans = new int*[m+1];
	for(int i=0; i<=m; i++){
		ans[i] = new int[n+1];
		for(int j=0; j<=n ; j++){
			ans[i][j] = -1;
		}
	}
	return lcs_memo(s, t, ans);
}

//RECURSIVE METHOD
int lcs(string s, string t)
{
	if(s.size() == 0 || t.size() == 0){
		return 0;
	}
	if(s[0] == t[0]){
		return 1 + lcs(s.substr(1), t.substr(1));
	}
	int x = lcs(s.substr(1) , t);
	int y = lcs(s, t.substr(1));
	int z = lcs(s.substr(1), t.substr(1));
	int ans = max(x, max(y,z));
	return ans;
}

int main(){
	string s, t;
	cin>>s>>t;
	cout<<lcs_memo(s,t)<<endl;
	cout<<lcs(s,t)<<endl;
}
