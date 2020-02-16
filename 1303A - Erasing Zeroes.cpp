#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n=0;	
	cin >> n;
	for(int i=0;i<n;i++){
		string a;
		int counter=0;
		int counter2=0;
		long long int tot=0;
		cin >> a;
		for(int j=0;j<a.size();j++){
				if(a[j]=='1' && counter==0){
					counter+=1;
				}else if(a[j]=='0' && counter>0){
					counter+=1;
				}else if(a[j]=='1' && counter>0){
					tot+=(counter-1);
					counter=1;
				}
			}
			cout << tot << endl;
		}
	}

