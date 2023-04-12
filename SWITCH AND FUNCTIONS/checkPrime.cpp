#include<iostream>
using namespace std;
    
    bool isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return true;
            }
        }
        return false;
    }
int main(){
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"not a prime number";
    }
    else{
        cout<<"it is a prime number";
    }
    return 0;
}