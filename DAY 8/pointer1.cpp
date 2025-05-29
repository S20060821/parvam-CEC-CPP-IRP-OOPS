#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrage=&age;

    string name;
    string *nameptr=&name;
    cout<<"enter your name & age:"<<endl;
    cin>>name>>age;

    //*pyrage & *nameptr-pointer dereferencing
    cout<<"your name is"<<(*nameptr)<<",you're"<<(*ptrage)<<"years old."<<endl;
    cout<<"the address of name is stored in pointer(nameptr):"<<nameptr<<endl;
    cout<<"the address of age is stored in pointer(ptrage):"<<ptrage<<endl;

    int *num1=new int(5);//dynamic memory allocation
    //the reference variable is not needed for assigning the address to the pointer we can use new keyword

    cout<<"the value within the pointer num1:"<<(num1)<<endl;
    int size;

    int*arr=new int[size];

    cout<<"enter the size of an array"<<endl;
    cin>>size;

    cout<<"enter the"<<size<<"elements,they are:"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}