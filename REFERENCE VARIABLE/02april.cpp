#include<iostream>
using namespace std;
    void update2(int &n){
        n++;
    }
    void update(int n){
    n++;
    }

int main(){
    // int i =5 ;
    // int &j = i;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    int n = 5;
    cout<<"before"<<n<<endl;
    cout<<"before2 "<<n<<endl;
    update(n);
    cout<<"after"<<n<<endl;
    update2(n);
    cout<<"after2 f"<<n<<endl;
    
    return 0;
}