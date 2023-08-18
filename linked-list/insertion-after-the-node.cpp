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
void traversing(Node* head){
    Node* temp = head;
    while(temp!=NULL){

        cout << temp->data<<"->";
        temp=temp->next;

    }
}
void insertAfterNode(Node* head, int val){
    Node* new_node = new Node(50);
    Node* temp = head;

    while(temp->data != val){
        temp= temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    
    head -> next = second;
    second->next = third;
    third-> next = fourth;

    insertAfterNode(head,20);
    traversing(head);


}