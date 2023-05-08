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

int sun(Node *p){
    int sum = 0;
    while(p!=NULL){
        sum = p->data + sum;
        p->next;
    }
    return (sum);
}

int main(){
    int A[] = {3,5,7,10,15};
    cout<<sun(first)<<endl;
    return 0;
}