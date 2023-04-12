#include<iostream>
using namespace std;
    
int main(){
    // int num =5;
    // cout<<num<<endl;

    // //address of operator
    // cout<<"address of num is "<<&num;
    // cout<<endl;

    // int *ptr = &num;
    // cout<<"value is : "<<*ptr<<endl;
    // cout<<ptr;

    // double a = 4.2;
    // double *p2 = &a;
    // cout<<"size of pointr p2 is "<<sizeof(p2)<<endl;

    // cout<<"size of integer is "<<sizeof(num)<<endl;
    // cout<<"size of pointer is "<<sizeof(ptr);

   // int *p;
   // cout<<*p;  //it is very bad practice

   int i=5;
   int *p = 0;
   p = &i;

   cout<<p<<endl;
   cout<<*p<<endl;

   cout<<"after increament the value of i and pointer changes"<<endl;

   *p = (*p +2); 

   cout<<*p<<endl;
   cout<<i<<endl;


int *z = p;
cout<<*z<<endl;
    return 0;
}