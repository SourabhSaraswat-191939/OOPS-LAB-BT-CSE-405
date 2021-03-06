#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
    public:
        void setTime(){
            cout<<"Enter Hours => ";
            cin>>hours;
            cout<<"Enter Minutes => ";
            cin>>minutes;
        }
        void display(){
            cout<<endl;
            cout<<hours<<" Hours : "<<minutes<<" Minutes"<<endl;
            cout<<endl;
        }
        friend Time addTime(Time t1,Time t2);
        
};

Time addTime(Time t1,Time t2){
     Time result;
     result.minutes = t1.minutes + t2.minutes;
     result.hours = t1.hours + t2.hours + (result.minutes/60);
     result.minutes %= 60;
     return result;
}

int main(){
    cout<<"\nEnter Time Of First Object"<<endl;
    Time time1;
    time1.setTime();
    cout<<"\nEnter Time Of Second Object"<<endl;
    Time time2;
    time2.setTime();
    Time ans = addTime(time1,time2);
    cout<<"\n############# Result After Adding Both Times #############"<<endl;
    ans.display();
    return 0;
}