#include<iostream>
using namespace std;
    
int add(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    
    int arr[100];

    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = add(arr,n);
    cout<<"sum of array is "<<ans<<endl;
    return 0;
}