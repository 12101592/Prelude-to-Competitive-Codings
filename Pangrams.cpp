#include <bits/stdc++.h>
using namespace std;

bool pangram(string& str){
	vector <bool> m(26,false); 
	int index;	 	
	 	if('A'=str[i] && 'Z'=str[i])
	 	index=str[i]-'A';
	 	
	 	else if('a'=str[i] && 'z'=str[i])
	 	index=str[i]-'a';
	 	else
	 	continue;
	 	m[index]=0;
	 }
	 for(int i=0;i<str.length();i++)
	 if(str[i]==false)
	 return false;
	  return true;
	 
}

int main(){
	string str="The quick brown fox jumps over the lazy dog";

if(pangram(str)==true){
	cout<<"Pangram";
}
else{
	cout<<"Not Pangram";
}
	
	
}
