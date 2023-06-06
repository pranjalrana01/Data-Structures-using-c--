#include<bits\stdc++.h>
using namespace std;
    
    struct Node{
        int value;
        Node* next;
    };

    class Stack{
        public:
            Node *head;
            int size;

        Stack(){
            head == NULL;
            size = 0;
        }

        void push(int d){
            Node* temp = new Node();
            temp -> value = d;
            temp -> next = head;
            head = temp;
            size++;
        }
public:
        void pop(){
            if(head == NULL){
                cout<<"stack underflow"<<endl;
            }

            Node* temp = head;
            head = temp -> next;
            temp -> next = NULL;
            delete temp;
            cout<<"element is popped "<<endl;
            size--;
        }

        void peak(){
            if(head == NULL){
                cout<<"stack is empty"<<endl;
            }

            cout<<"top element is "<<head -> value<<endl;
        }

        int sizee(){
            return size;
        }

    };
int main(){

    Stack s1;
    s1.push(20);

    s1.push(21);
    s1.push(22);
    s1.peak();

    return 0; 
}