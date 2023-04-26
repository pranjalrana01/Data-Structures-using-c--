#include<iostream>
using namespace std;

    class Hero{
        //properties
        private:
            int health;
        public:
            char level;

            //parameterised constructor
            Hero(int health){
                this->health = health;
            }

            Hero(int health,char level){
                this->health = health;
                this->level = level;
            }
            
            void print(){
                cout<<level<<endl;
            }

            
    };

int main(){
    
    cout<<"hello"<<endl;
    Hero a(70);
    a.print();
    Hero b(65,'C');
    b.print();
    cout<<"hii"<<endl;
    cout<<"health is "<<endl;
    

    return 0;
}