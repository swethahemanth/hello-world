#include<iostream>
using namespace std;
int main(){
	int n,t,sum=0;
	cout <<"enter the number of temperatures";
	cin>>n;
	for(int i=1;i<=n;i++){
			cout <<"enter the" <<i <<"th of temperatures :";
			cin>>t;
		sum+=t;
	}
	cout <<"the sum of temperatures is  "<<sum<<"the avearage is  :"<<(sum/n);
}
