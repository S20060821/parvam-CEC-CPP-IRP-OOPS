#include<iostream>
using namespace std;

class bike{
    public:
        string brand, model, engine_type;
        int year, price;

        void injectfuel(){
            cout<<"injected the fule-petrol!"<<endl;
        }
        void ignitefuel(){
            cout<<"injected the fule!"<<endl;
        }
        void start(string bikemodel){
            injectfuel();
            ignitefuel();
            cout<<model<<"started,happy journey!"<<endl;
        }
        void stopaccleration(){
            cout<<"accleration stoped"<<endl;
        }
        void stopfuleflow(){
            cout<<"stopping the fuel"<<endl;
        }
        void stop(){ 
           stopaccleration(); 
           stopfuleflow();
           cout<<model<<"stopped, lock the vehical";
        }
    };
    int main(){
        bike bike1;
        bike1.brand="bajaj";
        bike1.model="pulsar NS125";
        bike1.engine_type="BS6";
        bike1.year=2022;
        bike1.price=150000;
        bike1.start(bike1.model);
        bike1.stop();
    }