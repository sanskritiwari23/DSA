#include<iostream>
using namespace std;

int main(){
	
	int number [15];
	
	cout<<"Value at 14 index: "<< number[14]<<endl;
	cout<<"Every thing is fine"<<endl;
	
	int second [3] = {5,7,11};
	
	cout<<"Value at 2nd index: "<< second[2]<<endl;
	
	int third[15] = {2,7};
	int n = 15;
	cout<<"Printing the array"<<endl;
	for(int i =0; i<n; i++){
		cout<< third[i]<< " ";
	}
	
	int forth[10] = {0};
	cout<<"Printing the array"<<endl;
	for(int i =0; i<n; i++){
		cout<< forth[i]<< " ";
	}
	
	return 0;
}
