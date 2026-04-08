#include<iostream>
using namespace std;

class CarDetails{
    string carName;
    long long Price;
    string ConstructorType;

    public:
    // Default Constructor
    CarDetails(){
        cout<<"Default Constructor"<<endl;
        carName = "Undefined";
        Price = 0;
        ConstructorType = "Default_Contructor";
    }

    // Parameterized Constructor
    CarDetails(string carName,long long Price){
        cout<<"Parameterized Constructor"<<endl;
        this->carName=carName;
        this->Price=Price;
        ConstructorType="Parameterized_Constructor";
    }

    // Copy Constructor
    CarDetails(CarDetails const& obj){
        cout<<"Copy Constructor"<<endl;
        carName=obj.carName;
        Price=obj.Price;
        ConstructorType="Copy_Constructor";
    }

    void showDetails(){
        cout<<"-----CarDetails("<<ConstructorType<<")-----"<<endl;
        cout<<"Car name is "<<carName<<endl;
        cout<<"Car price is "<<Price<<endl;
    }

    // Destructor
    ~CarDetails(){
        cout<<"Destructor call for "<<ConstructorType<<endl;
    }
};

int main(){
    CarDetails obj1,obj2("TATA_Punch",786598);
    CarDetails obj3(obj2);

    obj1.showDetails();
    obj2.showDetails();
    obj3.showDetails();
}