#include<iostream>
#include<fstream> //header file handling the files(read/write)
using namespace std;

int main(){
    //writing in the file
    ofstream out("sample.text");\
    string name;
    int age;

    cout<<"enter your name & age:";
    cin>>name>>age;
    out<<"hello"<<name<<"!"<<endl;
    out<<"you're"<<age<<"years old"<<endl;
    out.close();

    ifstream read("abc.txt");
    string line;
    cout<<"fail contains:"<<line<<endl;
    while(getline(read,line)){
        cout<<line<<endl;
    }
    getline(read,line);
    cout<<"file contains:"<<line<<endl;
    read.close();

}
