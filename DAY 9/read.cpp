#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    //syntax for using the getline():
    //getline(object,string)
    getline(read,file_content);
    cout<<"the file contains:"<<endl;
    cout<<file_content<<endl;
    //read.close();

    //to print all the lines,we need to make use of some loop
    ifstream show("a.txt");
    string all_lines;
    cout<<"the file contain:"<<endl;
    while(getline(read,file_content)){
        cout<<file_content;
    }
    read.close();
//to print first character of the string
ifstream fin("a.txt");
char letter;
fin.get(letter);
cout<<"the first letter of the line is:"<<letter;
fin.close();
}