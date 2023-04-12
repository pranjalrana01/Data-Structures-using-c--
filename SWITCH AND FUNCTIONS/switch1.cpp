#include<iostream>
using namespace std;
    
int main(){
    int a=2;

    switch (a)
    {
    case 1:cout<<"case first"<<endl;
        break;
    
    case 2:cout<<"case second"<<endl;
        continue;
    
    default:cout<<"default case"<<endl;
        break;
    }
    return 0;
}