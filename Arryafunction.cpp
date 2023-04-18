#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	
	cout<<"Printing the array"<<endl;
	
	for(int i = 0; i<size; i++){
		cout<<arr[i]<< " ";
	}
	
}

int main(){
	
	int third[15] = {2,7};
	int n = 15;
	printArray(third,15);
	
	int thirdsize = sizeof(third)/sizeof(int);
	cout<<"Size of third is"<<thirdsize<<endl;
	
	char ch[5] = {'a', 'b', 'c', 'd', 'e'};
	int size;
	
	cout<<"Printing the array"<<endl;
	
	for(int i = 0; i<size; i++){
		cout<<printArray[i]<<endl;
}
}
