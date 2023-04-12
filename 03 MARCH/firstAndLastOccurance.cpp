#include<iostream>
using namespace std;

    int firstOcc(int arr[],int n,int target){
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int ans = -1;

        while(start<=end){
            if(arr[mid]==target){
                ans = mid;
                end = mid-1;
            }
            else if(arr[mid]<target){
                start = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }

    int lastOcc(int arr[],int n,int target){
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int ans = -1;

        while(start<=end){
            if(arr[mid]==target){
                ans = mid;
                start = mid+1;
            }
            else if(arr[mid]<target){
                start = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
int main(){
    int arr[12] = {1,2,3,3,3,3,3,3,4,5,6,7};
    int index = firstOcc(arr,12,3);
    int indexx = lastOcc(arr,12,3);
    cout<<"first occurance of 3 is "<<index<<endl;
    cout<<"last occurance of 3 is "<<indexx<<endl;
    return 0;
}