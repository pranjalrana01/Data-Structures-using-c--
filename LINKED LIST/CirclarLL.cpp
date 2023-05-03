#include<iostream>
using namespace std;
    

    class Node{
        public:
        int data;
        Node *next;

        //constructor
        Node(int d){
            this -> data = d;
            this -> next = NULL;
        } 

        ~Node(){
            int value = this -> data;
            if(this->next != NULL){
                delete next;
                next = NULL;
            }
        }
    }; 

    void insertNode(Node* &tail, int element, int d){
        //assuming that the element is present in the list

        //empty list
        if(tail == NULL){
            Node* newNode= new Node(d);
            tail = newNode;
            newNode -> next = newNode;
        }
        else{
            //non empty list
            Node* curr = tail;
            
            while(curr->data != element){
                curr = curr -> next;
            }
            //element found and curr is pointing to founded element
            Node* temp = new Node(d);
            temp->next = curr->next;
            curr -> next = temp;
        }
    }

    void print(Node* tail){
        Node* temp = tail;

        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        }while(tail!=temp);
        cout<<endl;
    }

    void deleteNode(Node* &tail,int value){
        //empty list
        if(tail == NULL){
            cout<<"list isempty"<<endl;
        }else{
            Node* prev = tail;
            Node* curr = prev->next;

            while(curr->data != value){
                prev = curr;
                curr = curr->next;
            }
            prev -> next = curr -> next;
            if(tail == curr){
                tail = prev;
            }
            curr -> next = NULL;
            delete curr;
        }
    }
int main(){
    
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    return 0;
}