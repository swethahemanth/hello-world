#include <iostream>
using namespace std;
int main(){
	string s;
	cout<<"enter the string :";
	getline (cin,s);
	char rev[s.size()];
	cout<<s.size();
	for (int i=0, j=s.size()-1;i<s.size();i++,j--){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
		s[i]=s[j];	
		}
	}
	cout<<s;
}
