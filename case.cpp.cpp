#include<iostream>
using namespace std;
int main(){
		char c;
		cout<<"Enter the value of c in character or integer"<<endl;
	cin>>c;
	if(c >= 'a' && c<='z'){
		cout<<"c is lowercase"<<endl;
	}	
	if(c >= 'A' && c<='Z'){
		cout<<"C is Uppercase"<<endl;
	}
	if(0<=c<=9){
	cout<<"c is Numeric"<<endl;
}
return 0;
}
