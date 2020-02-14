#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, tote = 0, tota = 0, min = 0;
	cin >> n;
	int votes[n];
	for(int i = 0; i < n; i++){
		cin >> votes[i];
		tote += votes[i];
		if(votes[i] > min){
			min = votes[i];
		}
	}
	for(int i = 0; i < n; i++){
		tota += min - votes[i];
	}
	if(tota > tote){
		cout << min;
	}
	else{
		while(tota <= tote){
			min++;
			tota += n;
		}
		cout << min;
	}
	
	return 0;
}
