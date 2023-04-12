#include<iostream>
using namespace std;
    
    // void swapping(int a,int b){
    //     int temp = b;
    //     b=a;
    //     a=temp;
    // }
    void swapArray(int arr[],int size){
        for(int i=0;i<size;i+=2){
            if(i+1<size){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    void printArray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
int main(){
    
    int nums[8] = {1,2,3,4,5,6,7,8};
    swapArray(nums,8);
    printArray(nums,8);
    return 0;
}