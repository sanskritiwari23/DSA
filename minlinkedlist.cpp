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

int Min(Node *p){
    int min = INT32_MAX;
    while(p!=NULL){
        if(p->data<min){
            min = p ->data;
        }
         p = p->next;
    }
    return min;
}


int main(){
    int A[] = {3,5,7,10,25};

    create(A,5);

    //display(first);

    cout<<Min(first)<<endl;

    return 0;
}