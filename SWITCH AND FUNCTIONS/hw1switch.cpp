#include<iostream>
using namespace std;
    
int main(){

    int amount = 1330;
    int n100,n50,n20,n1;

    switch(amount>=100){
        case 1: n100 = amount/100;
                amount = amount - (n100*100);
                break;
    }
     switch(amount>=50){
        case 1: n50 = amount/50;
                amount = amount - (n50*50);
                break;
    }
     switch(amount>=20){
        case 1: n20 = amount/20;
                amount = amount - (n20*20);
                break;
    }
     switch(amount>=1){
        case 1: n1 = amount/1;
                amount = amount - (n1*1);
                break;
    }

    cout<<"100 rupee notes are "<<n100<<endl;
    cout<<"50 rupee notes are "<<n50<<endl;
    cout<<"20 rupee notes are "<<n20<<endl;
    cout<<"1 rupee notes are "<<n1<<endl;

    
    return 0;
}