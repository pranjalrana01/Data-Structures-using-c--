#include<bits\stdc++.h>
using namespace std;

int main(){
    //creation of the vector
    // vector<int>v;

    // //element dalne ke liye
    // v.push_back(1);
    // cout<<"capacity of the vector v is "<<v.capacity()<<endl;

    deque<int>d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}