#include<iostream>
using namespace std;
void sayHello(){ //function declaration
    cout << "Hello!" <<endl; 
}
int sayHi(string fname){ //function with parameter
    cout << "Hi," << fname <<endl;
}
int greet(string fname, string lname, int age){ //function with parameter
    cout << "Hi," << fname << lname <<",Age:"<<age<<endl;
}
int main(){
    string firstName, lastName, friendsName;
    int Age;
    cout <<"enter your first name :"; 
    cin >> firstName;
    cout<<"enter your last name :";
    cin>>lastName;
    cout <<"enter your age :";
    cin>>Age;
    cout<<"enter your friendsname :";
    cin >> friendsName;
    sayHello() ; //function call
    sayHi(firstName);
    sayHi(friendsName);
    greet(firstName,lastName,Age);
}