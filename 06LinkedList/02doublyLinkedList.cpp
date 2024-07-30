#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this ->next = NULL;
    }
};

void InsertAtHead(Node* &head, Node* &tail ,int d){
    //empty list

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }    
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        InsertAtHead(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(head,tail, d);
        return;
    }
    Node* NodetoInsert = new Node(100);
    NodetoInsert ->next = temp ->next;
    temp ->next ->prev = NodetoInsert;
    NodetoInsert -> prev = temp;
    temp -> next = NodetoInsert;
}
void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int lengthOfList(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
int main()
{
    Node* node1 = new Node(20);

    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(head,tail, 10);
    Print(head);

    insertAtTail(head,tail, 30);
    Print(head);

    InsertAtPosition(head, tail, 1, 100);
    Print(head);

    cout<<lengthOfList(head);

    return 0;
}