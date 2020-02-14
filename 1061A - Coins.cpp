#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int coins = s / n;
	if(s % n != 0)
		coins++;
	cout << coins;
	
	return 0;
}
