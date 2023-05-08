#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    else
    return fun(n-1)+n;
}

int main(){
   int a = 5;
   cout<<fun(a)<<endl;
    return 0;
}