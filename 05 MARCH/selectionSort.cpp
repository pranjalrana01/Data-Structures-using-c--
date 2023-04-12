#include<iostream>
using namespace std;
    void selectionSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            int minIndex = i;
            for(int j=i+1;j<n-1;j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[minIndex],arr[i]);
        }
    }
int main(){
    int arr[8]={21,34,54,11,43,88,57,22};

    selectionSort(arr,8);
    
    return 0;
}