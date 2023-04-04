#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
    Node(int d){
    	data = d;
    	next = NULL;
	}
};


void Instert(Node*& head, int d){
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}


void Instert(Node* tail, int d){
	Node* temp = new Node(d);
	temp -> next = tail;
	tail = temp;
}

void print(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp -> data <<"-> ";
		temp = temp -> next;
	}
	cout<<endl;
}

void printk(Node* &tail){
	Node* temp = tail;
	while(temp != NULL){
		cout<<temp -> data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

int main(){
	Node* head = NULL;
	Instert(head, 12);
	print(head);
	
    Instert(head, 5);
	print(head);
	
	Instert(head, 8);
	print(head);
	
    Instert(head, 10);
	print(head);
	
//	InsterAtTail(tail, 12);
//	printk(tail);
}
