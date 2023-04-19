#include<iostream>
using namespace std;
    bool linearSearch(int arr[],int size,int key){
        if(size==0){
            return false;
        }
        if(arr[0]==key){
            return true;
        }

        else{
            bool remainingPart = linearSearch(arr+1,size-1,key);
            return remainingPart;
        }
    }
int main(){

    int arr[8]={2,4,6,8,10,3,5,7};
    int size=8;
    int key = 11;

    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }

    return 0;
}