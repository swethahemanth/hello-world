#include <iostream>  
using namespace std;  
int main()  
{ 
int a[3],c=0;
cout<<"enter the three numbers :";
cin>>a[0]>>a[1]>>a[2];
for (int i=0;i<3;i++){

	
	for (int j=i+1;j<3;j++){
		if(a[j]>a[i]){
			int k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
}
cout<<a[1];
    return 0;  
}  

