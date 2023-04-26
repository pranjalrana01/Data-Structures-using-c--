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
            static int timeToComplete;

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
            char *ch = new char[strlen(temp.name) + 1];
            strcpy(ch,temp.name);
            this->name = ch;
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

            static int random(){
                cout<<timeToComplete<<endl;
            }

            ~Hero(){
                cout<<"destructor called"<<endl;
            }
            
    };

    int Hero::timeToComplete = 5;

int main(){
    
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8]= "pranjal";
    hero1.setName(name);

    hero1.print();
    
    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    cout<<endl;
    cout<<endl;

    cout<<Hero::random()<<endl;

    return 0;
}