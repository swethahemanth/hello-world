#include <iostream>
using namespace std;
int main(){
int i,j,n=12;

for (i=0;i<=n;i++){
	for (j=0;j<=n;j++){
		if ((i+j)%2 == 0){
			cout<<"* ";
		}
		else{
			cout<<"  ";
		}
	}
	cout<<"\n";
}
}
