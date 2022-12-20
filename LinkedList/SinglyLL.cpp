#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   //constructor
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void InsertAtposition(Node* &head, Node* &tail, int position, int data){
    //insert at Start position
    if(position == 1){
        InsertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    //traverse LL upto n-1;
    while (cnt<position-1)
    {
       temp = temp->next;
       cnt++;
    }
    //insert at last position
    if(temp->next == NULL){
        InsertAtTail(tail, data);
        return;
    }


    //creating a node for d
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteAtPosition(int position, Node* &head){
   //start node
   if(position == 1){
     Node* temp = head; 
     head = head->next;
     //memory free start node
     temp->next = NULL;
     delete temp;
   }
   else{
     //delete at any pos
     Node* curr = head;
     Node* prev = NULL;
     int cnt =1;
     while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
     }
     prev->next = curr->next;
     curr->next = NULL;
     delete curr;

   }
}


void print(Node* &head){
    Node* temp = head;
    while (temp!= NULL)
    {
       cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
    
}

int main(){

  

    Node* node1 = new Node(10);
    cout<<node1->data<<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtTail(tail, 12);

    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtposition(head, tail, 4, 22);
    print(head);

    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    deleteAtPosition(4, head);
    print(head);
     
    return 0;
}