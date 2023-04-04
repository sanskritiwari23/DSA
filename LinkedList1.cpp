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

void print(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp -> data <<"-> ";
		temp = temp -> next;
	}
	cout<<endl;
}

void InstertPosition(Node* &head, int position, int d){
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position - 1){
		temp = temp -> next;
		cnt++;
	}
	
	Node* Nodetoinsert = new Node(d);
	Nodetoinsert -> next = temp -> next;
	temp -> next = Nodetoinsert;
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
	
	InstertPosition(head, 3, 22);
	print(head);
}
