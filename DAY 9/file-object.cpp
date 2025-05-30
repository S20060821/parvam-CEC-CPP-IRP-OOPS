#include<iostream>
#include<fstream>
using namespace std;

class car{
    private:
        string brand,model,variant,features[10];
        int year,price,featurecount;

    public:
        void addcardetails(string carbrand,string carmodel,string carvariant,int year,int price){
            brand=carbrand;
            model=carmodel;
            variant=carvariant;
            this->year=year;
            this->price=price;
        }

        void addcarfeatures(int count){
            featurecount=count;
             cin.ignore();
            cout<<"enter the"<<count<<"features of the car:";
            for (int i=0; i<count;i++){
                cout<<"features -"<<i+1<<":";
                getline(cin,features[i]);
            }

            cout<<"click enter button for next input"<<endl;
        }

        void storecardetails(){
            ofstream store("car_details.txt",ios::app);//append the content to existing
            store<<"the are details are as follows:"<<endl;
            store<<"car brand:"<<brand<<endl;
            store<<"car model:"<<model<<endl;
            store<<"car variant:"<<variant<<endl;
            store<<"launch year:"<<year<<endl;
            store<<"offer price: Rs"<<price<<endl;
            store<<"car has these features"<<features<<endl;
            for(int i=0;i<featurecount;i++){
                store<<"\t"<<i+1<<"."<<features[i]<<endl;
            }
            store<<"------------------------------------";
        }

        
};

int main(){
    string car_brand,car_model,car_variant,car_feature[10];
    int features_count, launch_year, launch_price;

    cout << "Enter the car Details: "<<endl;
    cout << "Brand, Model, Variant, Launch Year, Launch Price: " <<endl;
    cout << "Ex: Tata, curvv, (Pertol/Diesel/EV), 2025, 150000"<<endl;
    cin >> car_brand >> car_model >> car_variant >> launch_year >> launch_price;

    cout << "Enter the number of feautres: "<<endl;
    cin >>features_count;
    cin.ignore();

    car car1;
    car1.addcardetails(car_brand, car_model, car_variant, launch_year, launch_price);
    car1.addcarfeatures(features_count);
    car1.storecardetails();

    car car2;
    car2.addcardetails("audi","q6","petrol",2019,1200005);
    car2.addcarfeatures(4);
    car2.storecardetails();
}