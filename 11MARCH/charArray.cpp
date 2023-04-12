#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
    
    int getlen(char name[]){
        int count = 0;
        for(int i=0;name[i]!='\0';i++){
            count++;
        } return count;
    }
int main(){
    char ch[10];
    cout<<"enter your name ";
    cin>>ch;
    cout<<endl;

    cout<<"your name is ";
    cout<<ch;
    cout<<endl;

    int len =getlen(ch);
    cout<<"length is "<<len;
    cout<<endl;
    reverse(ch,len);
    cout<<ch;
    return 0;
}