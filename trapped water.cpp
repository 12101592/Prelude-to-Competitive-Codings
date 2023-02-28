#include<iostream>
using namespace std; 

int trapped_water(int arr, int size){
	int  res=0;
	for(int i=0;i<size;i++){
		int right[i];
		for(int j=0;j<size;j++)
			right[i]=max(right,arr[j]);
			
			int left[i];
			for(int j=i+i;j<size;j++)
			left[i]=max(left,arr[j]);
			
			res=res+(min(lef,right)-arr[i]);
		
	}
	return 0;
	
}



int main(){
	
	int size;
	cout<<"enter the size of an array:";
	cin>>size;
	inr arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	trapped_water(arr,size);
	return 0; 
	

}
