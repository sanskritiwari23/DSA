#include<iostream>
using namespace std;

//Call by Value

int add (int a, int b){
    int c;
    c = a+b;
    return 0;
}
int main(){
int num1 = 10;
int num2 = 15;
int sum;

sum = add(num1,num2);
cout<<sum<<endl;

}