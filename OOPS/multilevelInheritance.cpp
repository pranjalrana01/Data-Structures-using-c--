#include<iostream>
using namespace std;
    
    class Animal{

        public:
        int age;
        int weight;

        public:
        void speak(){
            cout<<"speaking"<<endl;
        }
    };

    class Dog: public Animal{

    };

    class Germanshepherd: public Animal{

    };

int main(){
    Germanshepherd G;
    G.speak();
    
    return 0;
}