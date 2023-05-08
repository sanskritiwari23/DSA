#include<iostream>
using namespace std;

int Power(int m, int n){
    if(n==0){
        return 1;
    }
    else
    return m * Power(m,n-1);
}

int main(){
    cout<<Power(4,2)<<endl;
}