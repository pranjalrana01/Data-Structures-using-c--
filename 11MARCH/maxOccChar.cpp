#include<iostream>
using namespace std;
    
    char getmax(string s){

        //create an array of characters
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            char ch = s[i];

            //to lowercase
            int number = 0;
            if(ch>='a' && ch<='z'){
                 number = ch-'a';
            }else{

                //to uppercase
                number =ch-'A';
            }
            arr[number]++;
        }
        int maxi =-1,ans =0;
        for(int i=0;i<26;i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        char finalAns = 'a'+ans;
        return finalAns;
    }

int main(){
    string s;
    cin>>s;

    cout<<getmax(s)<<endl;
    return 0;
}