#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main(){
	int n, moves = 0; string in1, in2;
	cin >> n;
	cin >> in1;
	cin >> in2;
	for(int i = 0; i < n; i++){
		int temp = in1[i] - in2[i]; 
		if(abs(temp) < 5){
			moves = moves + abs(temp);
		}
		else
			moves = moves + (10 - abs(temp));
	}
	cout << moves;
	return 0;
}
