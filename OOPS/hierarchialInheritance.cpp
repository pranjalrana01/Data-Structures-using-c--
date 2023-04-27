#include<iostream>
using namespace std;
    
    class Animal{

        public:
        int age;
        int weight;

        public:
        void bark(){
            cout<<"barking"<<endl;
        }
    };

    class Dog: public Animal{
        public:
        void func2(){
            cout<<"inside class dog"<<endl;
        }
    };

    class Cat:public Animal{
        public:
        void func3(){
            cout<<"inside class cat"<<endl;
        }
    };

int main(){
    
    Cat c1;
    c1.bark();

    Dog d1;
    d1.bark();

    return 0;
}