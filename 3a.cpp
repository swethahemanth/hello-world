#include<iostream>
using namespace std;
int main(){
string s;
cout<<"enter the string";
getline(cin,s);

for (int i=0;i<s.length();i++){
	if (s[i]>='a' && s[i]<='z'){
	
	if(s[i]<='m'){
		s[i]=s[i]+13;
		
	}
	else{
	s[i]=(s[i]-'n')+'a';
	
	}
}
else{
	
	if(s[i]<='M'){
		s[i]=s[i]+13;
		
	}
	else{
	s[i]=(s[i]-'N')+'A';
}
}
cout<<" COT -13 STRING IS"<<s;
}
}
