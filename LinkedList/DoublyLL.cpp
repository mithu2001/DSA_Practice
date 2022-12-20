#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

//traverse the list
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//get length
int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while (temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    
    return len;
}

void InserAtHead(){
    
}

int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    print(head);
    
    cout<<getLength(head);

    return 0;
}