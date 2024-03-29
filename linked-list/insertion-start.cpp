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

Node* insertAtStart(Node* head){
    Node* new_node = new Node(50);
    new_node->next=head;
    return new_node;
}

void traversing(Node* head){
    Node* temp=head;

    while(temp != NULL ){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next =second;

    second->next=third;

    third->next = fourth;

    head = insertAtStart(head);
    traversing(head);
    

}