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

int main(){
    // Create child class object
    Child objC;
    objC.ShowChild();
    objC.ShowParent();
}