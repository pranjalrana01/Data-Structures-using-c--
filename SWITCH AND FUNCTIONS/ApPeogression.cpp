#include<iostream>
using namespace std;

int aP(int n){
    int ans = (3*n)+7;
    return ans;
}

    
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;

    int resultingTerm = aP(n);
    cout<<resultingTerm;
    return 0;
}