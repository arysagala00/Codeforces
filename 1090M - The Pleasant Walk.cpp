#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, counthouse = 0, max = 0;
	cin >> n >> k;
	int house[n];
	for(int i = 0; i < n; i++){
		cin >> house[i];
		if(house[i] == house[i - 1]){
			if(max < counthouse){
				max = counthouse;
			}
			counthouse = 1;
		}
		else{
			counthouse += 1;
			if(i == n - 1 && max < counthouse){
				max = counthouse;
			}
		}
	}
	cout << max;
	
	return 0;
}
