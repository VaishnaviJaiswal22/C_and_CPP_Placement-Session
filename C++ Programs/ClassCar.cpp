#include<iostream>
using namespace std;
// Create class
class Car
{
    string CarName;
    long long CarPrice;
    string CarColor;
    string CarNumber;

    public:
    void addCarInfo(){
        cout<<"Enter CarName: ";
        cin>>CarName;
        cout<<"Enter CarPrice: ";
        cin>>CarPrice;
        cout<<"Enter CarColor: ";
        cin>>CarColor;
        cout<<"Enter CarNumber: ";
        cin>>CarNumber;
    }

    void ShowCarInfo(){
        cout<<"----------Car Details------------";
        cout<<"Enter CarName:"<<CarName<<endl;
        cout<<"Enter CarPrice: "<<CarPrice<<endl;
        cout<<"Enter CarColor: "<<CarColor<<endl;
        cout<<"Enter CarNumber: "<<CarNumber<<endl;
    }
};

int main(){
    Car car1,car2;
    cout<<"Enter 1st Car Information :"<<endl;
    car1.addCarInfo();
    cout<<endl<<"Enter 2nd Car Information :"<<endl;
    car2.addCarInfo();
    car1.ShowCarInfo();
    car2.ShowCarInfo();
}
