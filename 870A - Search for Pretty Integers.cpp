#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, min1 = 10, min2 = 10, x;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(min1 > a[i])
			min1 = a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
		if(min2 > b[j])
			min2 = b[j];
	}
	if(min1==min2){
		x = min1;
	}
	else if(min1>min2){
		x = min2*10 + min1;
	}
	else if(min1<min2){
		x = min1*10 + min2;
	}		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i]==b[j] && a[i]<x){
				x = a[i];
			}
		}
	}
	cout << x;
}
