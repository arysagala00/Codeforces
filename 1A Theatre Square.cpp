#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,a=0,has=0,has1=0;
    cin>>n>>m>>a;
    if(n%a==0){
    	has=n/a;
	}
	else{
		has=(n/a)+1;
	}
	if(m%a==0){
		has1=m/a;
	}
	else{
		has1=(m/a)+1;
	}
    cout<<(long long int)has*has1;
}
