#include<iostream>
using namespace std;

int Factorial(int n){
    if(n==0){
        return 1;
    }
    else 
    return Factorial(n-1)*n;
}

int main(){
    int a = 5;
    cout<<Factorial(a)<<endl;
    return 0;
}