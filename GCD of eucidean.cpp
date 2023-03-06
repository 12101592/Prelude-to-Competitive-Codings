#include<iostream>
using namespace std;
 
 
 int func(int a, int b){
 	
 	if(a==0)
 	return b;
 	return func(b%2,a);
 }
 
 int main(){
 	
 	int a,b;
 	 cout<<"Enter the numbers:";
 	 cin>>a>>b;
 	 
 	 cout<<"GCD of "<<a<<"and "<<b<<"is"<<func(a,b);
 	 return 0;
 	 
 }
