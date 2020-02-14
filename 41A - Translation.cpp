#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	int ts = t.size() - 1, check = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == t[ts]){
			ts--;
		}
		else if(s[i] != t[ts]){
			check = 1;
			break;
		}
	}
	if(check)
		cout << "NO";
	else
		cout << "YES";
	
	return 0;
}
