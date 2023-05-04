#include<iostream>
using namespace std;
    
    class Node{
        public:
        int data;
        Node *next;
        int d;
        

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        //destructor
        ~Node(){
            int value = this->data;
            if(this->next!=NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"memory is free with data "<<value<<endl;
        }
    };

    void insertAtHead(Node* &head, int d){
        //new node create
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

    void insertAtTail(Node* &tail,int d){
         //new node create
        Node* temp = new Node(d);
        tail->next = temp;
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
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }

    void deleteNode(int position,Node* &head){
        //deleting start node
        if(position == 1){
            Node* &temp = head;
            head = head->next;
            
            //memory free krado
            delete temp;
        }
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

int main(){

    Node* node1 = new Node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,20);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insertAtPosition(head,2,25);
    print(head);
    
    return 0;

}