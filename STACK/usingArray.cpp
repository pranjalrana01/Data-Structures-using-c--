#include <bits\stdc++.h>
using namespace std;
    
    class Stack{
        public:
            int *arr;
            int size;
            int top;

        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size - top >1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"stack overflow"<<endl;
            }
        }

        void pop(){
            if(top >= 0){
                top--;
            }
            else{
                cout<<"stack underflow "<<endl;
            }
        }

        int peak(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"stack is underflow"<<endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
    };
int main(){

    Stack s1(4);
    s1.push(20);
    s1.push(21);
    s1.push(22);
    s1.push(23);

    cout<<s1.peak();

    return 0;
}