#include<iostream> 
using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
    char x;
}r3,r4,r5;

struct Rectangle r1;

int main(){

struct Rectangle r2 = {10,5};
r2.lenght = 15;
r2.breadth = 7;
cout<<r2.lenght<<endl;
cout<<r2.breadth<<endl;
cout<<sizeof(r2)<<endl;

    return 0;
}