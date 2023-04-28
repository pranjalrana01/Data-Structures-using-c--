#include<iostream>
using namespace std;
    
    class A{

        public:
        
        //function overloading

        void sayHello(){
            cout<<"hello hello hello"<<endl;
        }
        void sayHello(string name){
            cout<<"hello hello hello"<< name <<endl;
        }
    };
int main(){
    
    A obj;
    obj.sayHello();
    return 0;
}