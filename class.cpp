#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
};

 Rectangle(){
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b){
        length = l;
         breadth = b;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    void stelength(int lenght){
        lenght = l;
    }

    void setbreadth(int breadth){
        breadth = b;
    }

    int getlenght(){
        return lengttg;
    }

    int getbreadth(){
        return breadth;
    }
    ~Rectangle(){
        cout<<"Destructor";
    }

int main(){
    Rectangle r(10,5);
    cout<<r.area<<endl;
    cout<<r.perimeter<<endl;

    return 0;
}