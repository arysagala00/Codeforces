#include <bits/stdc++.h>

using namespace std;

int main(){
	string A; int n;
	cin >> A;
	n = A.length();
	cout<<A;
	for(int i = 1; i <= n; i++){
		cout << A[n-i];
	}
}
