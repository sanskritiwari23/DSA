#include<iostream>
using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
};

int main(){
  /*Rectangle r = {10,5};
   cout<<r.lenght<<endl;
   cout<<r.breadth<<endl;

   Rectangle *p = &r;
   cout<<p -> lenght<<endl;
   cout<<p-> breadth<<endl;*/ 

   Rectangle *p;
   p = new Rectangle;
    p -> lenght = 15;
    p -> breadth = 5;

    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;
    return 0;
}