#include<iostream>
using namespace std;
    void findDuplicate(int arr[],int size){
        int res = 0;
        for(int i=0;i<size;i++){
            res = res^arr[i];
        }
        for(int i=0;i<size;i++){
            res = res^i;
        }
        cout<<res;
    }
int main(){
    int arr[7]={1,2,3,4,5,1,6};
    findDuplicate(arr,7);
    return 0;
}