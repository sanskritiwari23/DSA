#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
	
	int start = 0;
	int end = size - 1;
	
	int mid = start + (end-start)/2;
	
	while(start<=end){
		 if(arr[mid] == key){
		 	return mid;
		 }
		 
		 
		 //Goto right part
		 if(key>arr[mid]){
		 	start = mid + 1;
		 }
		 else{
		 	start = mid - 1;
		 }
		 
		 mid = start + (end-start)/2;
	}
	return -1;
	
	
}

int main(){
	
	int even [6] = {2,4,6,8,12,18};
	int odd [5] = {3,8,11,14,16};
	
	
	int index = BinarySearch(even,6,12);
	
	int indexi = BinarySearch(even,6,28);
		
	cout<<"Index of 12 is: " <<index<<endl;
	
	cout<<"Index of 28 is: " <<indexi<<endl;
	
	int oddindex = BinarySearch(odd,5,14);
	
	cout<<"Index of 14 is: " <<oddindex<<endl;
	
	int oddindexi = BinarySearch(odd,5,24);
	
	cout<<"Index of 24 is: " <<oddindexi<<endl;
	
	return 0;
}
