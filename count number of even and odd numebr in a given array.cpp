#include<iostream>
using namespace std;
 int main(){
 	
 	int arr[]={1,2,3,4,5,6,7,8,9,40};
 	int N= sizeof(arr)/sizeof(arr[0]);
 	int cnev,cnodd;
 	for(int i=0;i<N/2;i++){
 		if(arr[i]%2==0)
 		cnev++;
 		else
 		cnodd++;
	 }
	 cout<<"odd: "<<cnodd<<endl<<"Even: "<<cnev;
	 return 0;
 }
