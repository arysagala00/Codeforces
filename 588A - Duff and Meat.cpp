#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, c[100000], m[100000], cost = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m[i] >> c[i];
	}
	int min = c[0];
	for(int i = 0; i < n; i++){
		if(c[i] <= min){
			cost += c[i] * m[i];
			min = c[i]; 
		}
		else if(c[i] > min){
			cost += m[i] * min;
		}
	}
	cout << cost;
}
