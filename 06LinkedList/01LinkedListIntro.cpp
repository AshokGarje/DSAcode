#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head,int position, int d){
    //insert at begin
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int count =1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    //creating a node for d
    Node* NodeToInsert = new Node(d);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;
    
}

//connect two seperated nodes
void insertAtMid(Node* &mid1, Node* &mid2, int d){
    Node* temp = new Node(d);
    mid1 -> next = temp;
    temp -> next = mid2;
}
void Print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1 = new Node(5);
    //Node* node2 = new Node(7);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to new node
    Node* head = node1;
    Node* tail = node1;
    Print(head);


    insertAtHead(head, 4);
    Print(head);

    insertAtTail(tail, 6);

    insertAtTail(tail, 7);
    Print(head);
    
    //insertAtMid(node1, node2, 6);
    insertAtPosition(tail, head, 1, 8);
    Print(head);
    return 0;
}
