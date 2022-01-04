#include <iostream>
using namespace std;
class Basic_info{
	public :
	int roll_no;
	char name[15];
	string  gender ; 
	void get_data(){
	cout<<"Enetr your name :"<<endl;
	cin>>name;
	cout<<"enter your roll no :"<<endl;
	cin>>roll_no;
	cout<<"Enetr your gender :"<<endl;
	cin>>gender;
	
	}
	void display(){
		cout<<"Your name is :"<<name<<endl;
		cout <<"Your gender is "<<gender <<endl;
		cout<<"your roll no is :"<<roll_no<<endl;
	}
};
class Physical_fit:public Basic_info{
	public :
		int height ,weight;
		void get_data(){
			Basic_info::get_data();
			cout<<"Enetr your height :"<<endl;
			cin>>height ;
			cout<<"Enter your weight :"<<endl;
			cin>>weight;
		}
		void display(){
			Basic_info::display();
			cout<<"Your weight is :"<<weight<<endl;
			cout<<"Your height is :"<<height <<endl;
		}
};
int main(){
	Physical_fit obj;
	obj.get_data();
	obj.display();
}
