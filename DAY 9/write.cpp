#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //we have defined the write object from the ofstream class
    ofstream write("a.txt");//opening the file from the ofstream class
    write<<"good morning students,"<<endl;
    write<<"we shall work on file handling!,"<<endl;
    write.close();//closing the file after writing

    ofstream fout("b.txt");
    fout<<"write in the file using another user-defined object: fout";
    fout.close();
    //we can use any word to make an object,ex:write,out,fout,fwrite 

    ofstream out("a.txt");
    out.put('G'); //adding single character to the file using put method
    out<<"ood morning!";
    out.close();
}