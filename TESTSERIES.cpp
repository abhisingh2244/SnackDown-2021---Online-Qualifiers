#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[5],ind=0,eng=0,dra=0;
	    for(int i=1;i<=5;i++){
	        cin>>a[i];
	        if(a[i]==0){
	            dra++;
	        }
	        else if(a[i]==1){
	            ind++;
	        }
	        else{
	            eng++;
	        }
	    }
	    if(ind==eng){
	        cout<<"draw"<<endl;
	    }
	    else if(ind>eng){
	        cout<<"india"<<endl;
	    }
	    else{
	        cout<<"england"<<endl;
	    }
	}
	return 0;
}
