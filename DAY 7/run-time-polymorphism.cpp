#include<iostream>
using namespace std;

class base{
    public:
        void showbase(){
            cout<<"base member function has been called!"<<endl;
        }
};

class derived:public base{
    public:
     void showbase(){
        cout<<"derived member function has been called!"<<endl;
        base::showbase();
     }
};

class animal{
    public:
        void makesonund(){
            cout<<"animal make some sound!"<<endl;
        }
};
class dog:public animal{
    public:
        void makesonund(){
            animal::makesonund();
            cout<<"dog barks!"<<endl;
        }
};
class cat:public animal{
    public:
        void makesonund(){
            cout<<"cat meows!"<<endl;
        }
};
int main(){
    // base b1;
    // b1.showbase();

    derived d1;
    d1.showbase();

    dog dog1;
    dog1.makesonund();

    
    cat cat1;
    cat1.makesonund();

}
