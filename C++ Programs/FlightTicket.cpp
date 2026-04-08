#include<iostream>
using namespace std;

class Ticket{
    string AirlineName;
    string passengerName;
    string flightNumber;
    string source;
    string stime;
    string destination;
    string dtime;
    string gate;
    string seat;
    string Class;
    string date;
    double price;

    public:
    void addTicketInfo(){
        cout << "Enter Airline Name: ";
        cin >> AirlineName;
        cout << "Enter Passenger Name: ";
        cin >> passengerName;
        cout << "Enter Flight Number: ";
        cin >>flightNumber;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Departure Time (HH:MM): ";
        cin >>stime;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Arrival Time (HH:MM): ";
        cin >> dtime;
        cout << "Enter Gate: ";
        cin >> gate;
        cout << "Enter Seat: ";
        cin >>seat;
        cout << "Enter Class (Economy/Business/etc.): ";
        cin >>Class;
        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;
        cout << "Enter Ticket Price: ";
        cin >> price;  
    }

    void ShowTicketInfo(){
         cout << "\n--- Flight Ticket Information ---\n";
        cout << "Airline Name   : " << AirlineName << endl;
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Flight Number  : " << flightNumber << endl;
        cout << "Source         : " << source << " at " << stime << endl;
        cout << "Destination    : " << destination << " at " << dtime << endl;
        cout << "Gate           : " << gate << endl;
        cout << "Seat           : " << seat << endl;
        cout << "Class          : " << Class << endl;
        cout << "Date           : " << date << endl;
        cout << "Price          : Rs." << price << endl;
        cout << "---------------------------------------\n";
    }
};

int main(){
    Ticket t1,t2,t3;
    cout<<"\nEnter 1st Ticket Information :\n";
    t1.addTicketInfo();
    cout<<"\nEnter 2nd Ticket Information :\n";
    t2.addTicketInfo();
    cout<<"\nEnter 3rd Ticket Information :\n";
    t3.addTicketInfo();

    cout<<"1st Ticket Information:\n";
    t1.ShowTicketInfo();
    cout<<"2nd Ticket Information:\n";
    t2.ShowTicketInfo();
    cout<<"3rd Ticket Information:\n";
    t3.ShowTicketInfo();
}