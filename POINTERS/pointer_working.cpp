#include<iostream>
using namespace std;
    
int main(){

    int arr[10]={9,2,3,4,5,6};

    cout<<"address of 1st index of array is "<<&arr<<endl;
    cout<<"address of 1st index of array is "<<&arr[0]<<endl;

    cout<<"*arr is : "<<*arr<<endl;
    cout<<"*arr is : "<<(*arr+1)<<endl;
    cout<<"*arr is : "<<*(arr+1)<<endl;
    cout<<"*arr is : "<<*(arr)+1<<endl;


    return 0;
}