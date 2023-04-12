#include<bits\stdc++.h>
using namespace std;
    
int main(){
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();
    cout<<"size of array is "<<size<<endl;

    cout<<"element at 1 index is "<<a.at(1)<<endl;
    cout<<"array is empty or not ?"<<a.empty()<<endl;
    cout<<"first element of the array is "<<a.front()<<endl;
    cout<<"last element of the array is "<<a.back()<<endl;
    return 0;
}