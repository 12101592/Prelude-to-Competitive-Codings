
#include <bits/stdc++.h>
using namespace std;
 
 void rotate_Array(int arr[],int d,int N){
 
 	int temp[N];
 		int k=0;
 	for(int i=d;i<N;i++){
 		 temp[k]=arr[i];
 		k++;
	 }
 	
 	for(int i=0;i<d;i++)
 	{
 		temp[k]=arr[i];
 		k++;
	 }
	 for(int i=0;i<N;i++){
	 	arr[i]=temp[i];
	 }
	
 }
 
 void print_arr(int arr[],int N){
 	for(int i=0;i<N;i++){
 		cout<<" "<<arr[i]<<" ";
	 }
 }
 
 
 int main(){
 	
 	int arr[]={10,20,30,40,50,60};
 	int N=sizeof (arr)/sizeof(arr[0]);
 	int d=2;
 	rotate_Array(arr,d,N);
 	print_arr(arr,N);
 	return 0;
 	 
 }
