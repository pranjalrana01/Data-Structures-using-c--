#include<iostream>
using namespace std;
    void Unique(int arr[],int size){
        int res = 0;
        for(int i=0;i<size;i++){
            res = res^arr[i];
        }
        cout<<"unique element is "<<res;
    }
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    Unique(arr,7);
    return 0;
}