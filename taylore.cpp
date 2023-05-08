#include<iostream>
using namespace std;

int e (int x, int n){
    static int P = 1, F=1;
    int r;
    if(n==0){
        return (1);
    }
    else{
        r = e(x,n-1);
        P = P * x;
        F = F * n;
        return r + P/F;
    }
}

int main(){
    cout<<e(1,4)<<" ";
    return 0;
}