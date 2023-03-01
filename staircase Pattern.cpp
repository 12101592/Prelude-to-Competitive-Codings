#include <bits/stdc++.h>

using namespace std;

int main(){
    
    
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<r-i-1;j++){
            cout<<" ";
        }
       for(int j=r-i-1;j<r;j++){
       	cout<<"*"<<" ";
	   }cout<<endl;
    }
    return 0;
    
}
