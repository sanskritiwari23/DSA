#include<iostream>

using namespace std;

int *fun(int A[]){
    cout<<sizeof(A)/sizeof(int)<<endl;

}

int main(){
    int A[] = {2,4,6,8,9};
    int n =5;
    fun(A);
     cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A){
        cout<<x<<endl;
    }


    return 0;
}