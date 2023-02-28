#include<iostream>
using namespace std;
 int main(){
 	
 int size;
 cout<<"Enter the size of array";
 cin>>size;
 cout<<"Enter the elements of array :";	

int arr[size];

for(int i=0; i<size; i++){
	cin>>arr[i];
}
int c=0;

for(int i=0;i<size;i++)
	
	
	if(arr[i]!=0)
		arr[c++]=arr[i];
	while(c<size)
	arr[c++]=0;
	cout<<"Moved all the zeroes at the end of array"<<endl;
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
	
 return 0;
}
