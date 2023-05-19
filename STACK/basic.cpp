#include<iostream>
#include <stack>
using namespace std;
    
int main(){
    stack<int>s;
    s.push(2);
    s.push(9);
    s.pop();
    s.pop();
    if(s.empty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }
    return 0;
}