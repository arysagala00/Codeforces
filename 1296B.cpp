#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int angka=0;
		int tot=0;
		cin >> angka;
		tot=angka;
		int temp=0;
		while(angka/10>0){
			temp=(angka/10);
			tot+=temp;
			angka=(angka%10)+temp;
			
		}
		cout << tot << endl;
	}
}
