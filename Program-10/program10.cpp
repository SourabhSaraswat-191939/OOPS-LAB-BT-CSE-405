#include<iostream>
using namespace std;

class Programmer{
    public:
        Programmer(string x){
            cout<<endl<<x<<" is a Programmer."<<endl;
        }
        void Tech_knowledge(){
            cout<<"Technical Knownledge :- A Full Stack Web Developer, C, C++, python, Flutter."<<endl;
        }
};

class Engineer{
    public:
        Engineer(string x){
            cout<<x<<" is an Engineer."<<endl;
        }
        void Student(){
            cout<<"Student of Central University Of Haryan in Computer Science and Engineer branch."<<endl;
        }
};

class Sourabh : public Programmer, public Engineer{
    public:
        Sourabh(string name): Programmer(name), Engineer(name){  // using Initializer List Syntax (":") to pass values to inherited constructor.
            cout<<"\n################ Some More Details about "<<name<<" ################\n"<<endl;
        }
};


int main(){
    Sourabh s("Sourabh"); 
    s.Tech_knowledge();
    s.Student();
    cout<<endl;
    return 0;
}