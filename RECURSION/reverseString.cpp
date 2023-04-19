#include<iostream>
using namespace std;
    void reverse(string& str,int i,int j){
        //base case
        if(i>j){
            return;
        }
        swap(str[i],str[j]);
        i++;
        j--;

        //recursive call
        reverse(str,i,j);
    }
int main(){
    string s = "abcde";
    reverse(s,0,s.length()-1);
    cout<<s<<endl;
    
    return 0;
}