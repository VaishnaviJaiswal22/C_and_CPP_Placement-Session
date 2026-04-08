#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;

    public:
    Complex(int real=0,int imag=0){
        this->real=real;
        this->imag=imag;
    }

    Complex operator+(Complex const& obj){
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
     Complex operator-(Complex const& obj){
        Complex res;
        res.real=real-obj.real;
        res.imag=imag-obj.imag;
        return res;
    }
    void show(){
        cout<<"Complex number = "<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex obj1(5,6),obj2(2,3);
    obj1.show();
    obj2.show();

    Complex obj3=obj1+obj2; // Operator overloading using + operator(here + operator calls operator+ function and pass obj2 as parameter)
    obj3.show();

    Complex obj4=obj1-obj2;// Operator overloading using - operator(here - operator calls operator- function and pass obj2 as parameter)
    obj4.show();
}