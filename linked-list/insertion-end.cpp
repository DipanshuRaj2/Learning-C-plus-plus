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
Node* insertion_beg(Node* head){
    Node* new_node = new Node(50);
    new_node->next = head;
    return new_node;
}
void insertAfterNode(Node* head, int val){
    Node* new_node = new Node(50);
    Node* temp = head;
    while(temp->data != val){
        temp=temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}
void insertionAtLast(Node* head){
    Node* new_node = new Node(50);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void traversing(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout <<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    
    head->next = second;
    second->next = third;
    third->next = fourth;

    // head= insertion_beg(head);
    // insertAfterNode(head , 30);
    insertionAtLast(head);
    traversing(head);
}