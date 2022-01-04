#include <iostream>
using namespace std;
int Afun(int h,int t,int s);
int Pfun(int h,int t,int s);
int main(){
	int h,m,s,t,k;
	cout <<"enter the time in 24 hour format :";
	cin >>h;
	cin >>m;
	k=m;
	t=m/10;
	if(t>1){
		t*=10;
		s=m%10;
	}
	else {
		m=0;
		s=k;
	}
	if (h==12){
		cout<<"noon";
	}
	else if(h==0){
		cout <<"mid night";
	}
	else if(h<12)
	{
		Afun(h,t,s);
		
	}
	else {
		Pfun(h,t,s);
		
	}
}
int Afun(int h,int t,int s){
	switch(h){
	case 1:
	case 13:
	cout<<"one";
		break;
       case 2:
       case 14:
			cout<<"two";
		break;
		case 3:
       case 15:
			cout<<"three";
		break;	
		case 4:
       case 16:
		cout<<"four";
		break;
		case 5:
       case 17:
			cout<<"five";
		break;
		case 6:
       case 18:
			cout<<"six";
		break;
		case 7:
       case 19:
		cout<<"seven";
		break;
		case 8:
       case 20:
		cout<<"eight";
		break;
		case 9:
        case 21:
			cout<<"nine";
		break;
		case 10:
       case 22:
	cout<<"ten";
		break;
			case 11:
       case 23:
	cout<<"eleven";
		break;
					
				
	}
	switch(t){
		case 20:
			cout<<"twenty ";
			break;
	case 30:
			cout<<"thirty ";
			break;
		case 40:
			cout<<"fourty ";
			break;
			
				case 50:
			cout<<"fifty ";
			
			
	}
	switch(s){
	case 1:
	
	cout<<"one";
		break;
       case 2:
      
			cout<<"two";
		break;
		case 3:
      
			cout<<"three";
		break;	
		case 4:
     	cout<<"four";
		break;
		case 5:
     
			cout<<"five";
		break;
		case 6:
       
			cout<<"six";
		break;
		case 7:
     
		cout<<"seven";
		break;
		case 8:
     
		cout<<"eight";
		break;
			case 9:
       
			cout<<"nine";
		break;
}
cout<<"am";		
}
 int Pfun(int h,int t,int s){
	switch(h){
	case 1:
	case 13:
	cout<<"one";
		break;
       case 2:
       case 14:
			cout<<"two";
		break;
		case 3:
       case 15:
			cout<<"three";
		break;	
		case 4:
       case 16:
		cout<<"four";
		break;
		case 5:
       case 17:
			cout<<"five";
		break;
		case 6:
       case 18:
			cout<<"six";
		break;
		case 7:
       case 19:
		cout<<"seven";
		break;
		case 8:
       case 20:
		cout<<"eight";
		break;
			case 9:
       case 21:
			cout<<"nine";
		break;
		case 10:
       case 22:
	cout<<"ten";
		break;
			case 11:
       case 23:
	cout<<"eleven";
		break;
					
				
	}
	switch(t){
		case 20:
			cout<<"twenty ";
			break;
	case 30:
			cout<<"thirty ";
			break;
		case 40:
			cout<<"fourty ";
			
				case 50:
			cout<<"fifty ";
			
			
	}
	switch(s){
	case 1:
	
	cout<<"one";
		break;
       case 2:
      
			cout<<"two";
		break;
		case 3:
      
			cout<<"three";
		break;	
		case 4:
     	cout<<"four";
		break;
		case 5:
     
			cout<<"five";
		break;
		case 6:
       
			cout<<"six";
		break;
		case 7:
     
		cout<<"seven";
		break;
		case 8:
     
		cout<<"eight";
		break;
			case 9:
       
			cout<<"nine";
		break;

		
}
cout<<"pm";
}
