#include<iostream>
#include <string.h>
using namespace std;

    class Hero{
        //properties
        private:
            int health;
        public:
            char *name;
            char level;

            //default constructor
            Hero(){
                cout<<"simple constructor called"<<endl;
                name = new char[100];
            }
            //parameterised constructor
            Hero(int health){
                this->health = health;
            }

            Hero(int health,char level){
                this->health = health;
                this->level = level;
            }

            //copy constructor
            Hero(Hero& temp){
                cout<<"copy constructor called"<<endl;
                this->health = temp.health;
                this->level = temp.level;
            }
            
            void print(){
                cout<<endl;
                cout<<"name: "<<this->name<<" ,";
                cout<<"health"<<this->health<<endl;
                cout<<"level"<<this->level<<endl;
            }
            int getHealth(){
                return health;
            }

            char getLevel(){
                return level;
            }

            void setHealth(int h){
                health = h;
            }
            
            void setLevel(char ch){
                level = ch;
            }

            void setName(char name[]){
                strcpy(this->name,name);
            }

            
    };

int main(){
    
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8]= "pranjal";
    hero1.setName(name);

    hero1.print();
    

    return 0;
}