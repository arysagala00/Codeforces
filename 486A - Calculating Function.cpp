#include<iostream>
 
 
using namespace std;
 
int main(){
 long long int n;
 cin >> n;
 if(n%2==0){
 	cout << (n+1)/2;
 }else{
 	cout << ((n+1)/2)*-1;
 }
retur