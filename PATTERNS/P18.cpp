#include<iostream>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        int stars1 = (i-1)*2;
        while(stars1){
            cout<<"*";
            stars1--;
        }
         int value=n-i+1;
        for(int k=1;k<=n-i+1;k++){
            cout<<value;
            value--;
        }
        cout<<endl;
    }
    
    return 0;
}