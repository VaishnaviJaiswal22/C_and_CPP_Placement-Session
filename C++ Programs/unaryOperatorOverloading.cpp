#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;

    public:
    Time(int h=0,int m=0){
        hour=h;
        minute=m;
    }

    void Show(){
        cout<<"H:"<<hour<<" and M:"<<minute<<endl;
    }

    Time operator++(){
        cout<<"Pre-Increment"<<endl;
        ++minute;
        if(minute>=60){
            ++hour;
            minute -= 60;
        }

        return (hour,minute);
    }

    Time operator++(int){
        cout<<"Post-Increment"<<endl;
        minute++;
        if(minute>=60){
            hour++;
            minute -= 60;
        }

        return (hour,minute);
    }

    Time operator--(){
        cout<<"Pre-Decrement"<<endl;
        --minute;
        if(minute<0){
            minute=59;
            --hour;
        }
        return (hour,minute);
    }

    Time operator--(int){
        cout<<"Post-Decrement"<<endl;
        minute--;
        if(minute<0){
            minute=59;
            hour--;
        }
        return (hour,minute);
    }
};

int main(){
    Time t1(1,59),t2(6,55);
    t1.Show();t2.Show();
     ++t1;++t2;
    t1.Show();t2.Show();

    cout<<endl;

    Time t3(3,49),t4(9,59);
    t3.Show();t4.Show();
    t3++;t4++;
    t3.Show();t4.Show();

    cout<<endl;

    Time t5(3,0),t6(12,12);
    t5.Show();t6.Show();
    --t5;--t6;
    t5.Show();t6.Show();

    cout<<endl;

    Time t7(11,12),t8(8,0);
    t7.Show();t8.Show();
    t7--;t8--;
    t7.Show();t8.Show();
}