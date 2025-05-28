#include<iostream>
using namespace std;

int main(){
    // syntax for declering the pointer
    //data type *pointer_name
    //datatype 
    int a;
    int *ptr=&a;

    float decimal;
    float *f=&decimal;

    cout<<"enter the value of a:"<<endl;
    cin>>a;

    cout<<" value of a:"<<endl;
    cout<<"address oa a:"<<endl;
    cout<<" value of pointer(ptr):"<<ptr<<endl;
    cout<<"address of ptr:"<<&ptr<<endl;
    cout<<"value pointed by ptr:"<<*ptr<<endl;

    cout<<" value of decimal:"<<decimal<<endl;
    cout<<"address oa decimal:"<<&decimal<<endl;
    cout<<" value of pointer(ptr):"<<f<<endl;
    cout<<"address of ptr:"<<&f<<endl;
    cout<<"value pointed by ptr:"<<*f<<endl;

}