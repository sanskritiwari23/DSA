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

/*int search(Node *p, int key){
    while(p!=NULL){
        if(p->data == key)
        return (p->data);
        
            p = p->next;
    }  
    return 0;          
}*/

int search(Node *p, int key){
    if (p == NULL)
    {
        /* code */
        return 0;
    }
    if (key == p->data)
    {
        /* code */
        return (p -> data);
    }
    return search(p->next, key);
    
    
}

int main(){
    int A[] = {3,5,7,10,25};

    create(A,5);

    //display(first);

   cout<<"Key is found: "<< search(first,25)<<endl;;

    return 0;
}