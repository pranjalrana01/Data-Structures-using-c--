#include<bits\stdc++.h>
using namespace std;
    
int main(){
    stack<string> s;

    s.push("hey");
    s.push(", how");
    s.push("are you");
    cout<<"top element is "<<s.top()<<endl;

    s.pop();
    cout<<"top element is "<<s.top()<<endl;


    return 0;
}