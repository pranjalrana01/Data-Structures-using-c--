#include<iostream>
using namespace std;
    
    void printArray(int arr[],int size){
        cout<<"printing the array"<<endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"printing done"<<endl;
    }
int main(){
    
    int number[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<"everything is fine"<<endl;

    int n=10;
    printArray(number,10);

    int numsize = sizeof(number)/sizeof(int);
    cout<<numsize;
    return 0;
}