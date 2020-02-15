#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
typedef vector<int> vi;
int main(){
	int n;
	cin >> n;
	vi data;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		data.push_back(x);
	}
	
	sort(data.begin(), data.end());
	
	for(vi::iterator it = data.begin();it != data.end();it++){
		cout << *it << " ";
	}
	
}
