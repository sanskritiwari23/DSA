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

void display(Node *p){
    if(p!=NULL){
        display(p->next);
        cout<<p->data<<endl;
    }
}

int count(Node *p){
    int l = 0;
    while(p){
        l++;
        p = p->next;
    }
    return l;
}

int main(){
     int A[] = {3,5,7,10,15};
     create(A,5);
     cout<<count(first)<<endl;
    return 0;
}