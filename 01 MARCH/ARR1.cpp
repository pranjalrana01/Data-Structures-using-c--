#include<bits\stdc++.h>
using namespace std;
    
    int getMax(int arr[],int size){
        int max=INT_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }

        int getMin(int arr[],int size){
        int min= INT_MAX;
        for(int i=0;i<size;i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return min;
    }

int main(){
    int arr[4]={1,2,3,4};
    cout<<"maximum value in the array is "<<getMax(arr,4)<<endl;
    cout<<"minimum value in the array is "<<getMin(arr,4)<<endl;

    return 0;
}