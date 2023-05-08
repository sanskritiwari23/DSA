#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
}*first = new Node();

void create(int A[], int n){
    int i;
    Node *t, *last;
    first -> next = NULL;
    last = first;

    for(i=0; i<n; i++){
        t = new Node();
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}


void display (Node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p -> next;
    }
}

int Max(Node *p){
    int max = INT32_MIN;
    while(p!=NULL){
        if(p->data>max){
            max = p ->data;
            p = p->next;
        }
    }
    return max;
}

int Rmax(Node *p){
    int x = 0;
    if(p==0)
        return INT32_MIN;

        x = Rmax(p->next);
        if(x>p->data)
             return x;
        

        else
            return p->data;
}

int main(){
    int A[] = {3,5,7,10,25};

    create(A,5);

    //display(first);

    cout<<Max(first)<<endl;

    cout<<Rmax(first)<<endl;

    return 0;
}