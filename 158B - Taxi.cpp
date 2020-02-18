    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int n, k, a[4]={0,0,0,0};
    	cin >> n;
    	for(int i=0; i<n ; i++){
    		cin >> k;
    		if(k == 4)a[3]++;
    		else if(k == 3)a[2]++;
    		else if(k == 2)a[1]++;
    		else if(k == 1)a[0]++;
    	}
    	int c = 3;
    	int taxi = 0;
    	while(a[c] != 0){
    		a[c]--;
    		taxi++;
    	}
    	//cout << "4 : " << taxi << endl;
    	c--;
    	while(a[c] != 0){
    		if(a[0] != 0){
    			a[c]--;
    			a[0]--;
    			taxi++;
    		}
    		else{
    			a[c]--;
    			taxi++;
    		}
    	}
    	//cout << "3 : " << taxi << endl;
    	c--;
    	while(a[c]!=0){
    		if(a[c] > 1){
    			a[c]-=2;
    			taxi++;
    		}
    		else if(a[0] == 1){
    			a[c]--;
    			a[0]--;
    			taxi++;
    		}
    		else if(a[0] > 1){
    			a[c]--;
    			a[0]-=2;
    			taxi++;
    		}
    		else if(a[0] == 0){
    			a[c]--;
    			taxi++;
    		}
    	}
    	c--;
    	//cout << "2 : " << taxi << endl;
    	if(a[c]!=0){
    		if(a[c] % 4 != 0)taxi += (a[c] / 4 + 1);
    		else taxi += a[c] / 4;
    	}
    		
    	cout << taxi;
    }
