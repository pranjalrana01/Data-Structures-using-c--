#include<bits\stdc++.h>
using namespace std;
    int leftsum(int arr[],int n){
         vector<int>left;
        left.push_back(0);
        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum = sum+arr[i];
            left.push_back(sum);
        }
        return left;
    }
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftsum(arr);


    return 0;
}