#include<iostream>
using namespace std;
bool isEven (int num){
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int num;
	cin>>num;
	
	if(isEven(num)){
		cout<<"Number is Even"<<endl;
	}
	else{
		cout<<"Number is odd"<<endl;
	}
	return 0;
}
