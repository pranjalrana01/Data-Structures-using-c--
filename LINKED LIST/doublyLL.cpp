#include<iostream>
using namespace std;
    
    class Node{
        public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }

    };

    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

    void insertAtHead(Node* &head,int d){
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void insertAtTail(Node* &tail,int d){
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

     void insertAtPosition(Node* &head,int position,int d){
        Node* temp = head;
        int cnt= 1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }

        //creating a node for d
        Node* nodeToInsert = new Node(d);

        nodeToInsert -> next = temp -> next;
        temp -> next -> prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
    }
int main(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,9);
    print(head);

    insertAtTail(tail,11);
    print(head);

    insertAtPosition(head,2,111);
    print(head);
    return 0;
}