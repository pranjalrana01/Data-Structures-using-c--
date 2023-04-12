#include<iostream>
using namespace std;
    
    int binarySearch(int arr[],int n,int key){
        int start = 0;
        int end = n-1;
        int mid = (start + end)/2;

        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start + end)/2;
        }
        return -1;
    }

int main(){
    int arr[7]={1,3,5,7,9,11,13};
    int index = binarySearch(arr,7,200);
    cout<<"index of 200 is "<<index;
    return 0;
}