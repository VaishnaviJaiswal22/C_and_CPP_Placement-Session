#include<iostream>
using namespace std;

class parent{
    public:
    void ShowParent(){
        cout<<"This is Parent class function\n";
    }
};

class Child:public parent{
    public:
    void ShowChild(){
        cout<<"This is Child class function\n";
    }
};

class SubChild:public Child{
    public:
    void showSubChild(){
        cout<<"This is SubChild Class function\n";
    }
};

int main(){
    // Create SubChild class object
    SubChild objSC;
    objSC.showSubChild();
    objSC.ShowChild();
    objSC.ShowParent();

    // Create child class object
    Child objC;
    objC.ShowChild();
    objC.ShowParent();
}