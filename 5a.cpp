#include <iostream>
using namespace std;
int main(){
	int n,var,c,k=0;
	cout<<"enter the no of elements :";
	cin>>n;
	int a[n];
	int b[2];
	for (int i=0;i<n;i++){
			cout<<"enter the "<<i+1<<" th element :";
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		c=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				c+=1;
			}
		}
		if(c==1){
		b[k]=a[i];
		k++;
		}
	}
	for (int i=0;i<2;i++){
		cout<<"the elements are"<<b[i];
	}
}
