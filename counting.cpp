#include<iostream>
using namespace std;

void printCounting (int n){
	int ans;
	for (int i = 1; i <= n; i++){
		cout<<i<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	printCounting(n);
	
	return 0;
}
