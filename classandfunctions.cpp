#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
};

int area(int length, int breadth){
    return length*breadth;
}

int Perimeter(int length, int breadth){
    int p;
    p = 2*(length+breadth);
    return p;
}

int main(){

    int length = 5;
    int breadth = 7;

    int a = area(length, breadth);
    //int Perimeter(length, breadth);

   cout<<a<<endl;

    return 0;
}