#include <iostream>
using namespace std;

int main() {
    int x;
    int n;
    cin>>x;
    cin>>n;
    int Power;

    for(int i = 0; i<=n; i++){
        if(n==0){
           Power = 1;
        }
        else{
            Power = x*x;
        }
        
    }

    cout<<Power<<endl;
    return 0;
}
