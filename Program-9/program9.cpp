#include<iostream>
using namespace std;

class topper{
    string student_name;
    int total_marks;
    public:
        topper(){
            cout<<"\n Default Constructor is Invoked."<<endl;
            student_name = "Not Initialized";
            total_marks = 0;
        }
        topper(string name, int marks){
            cout<<"\n Parameterized Constructor is Invoked."<<endl;
            student_name = name;
            total_marks = marks;
        }
        topper(topper &top){
            cout<<"\n Copy Constructor is Invoked."<<endl;
            student_name = top.student_name;
            total_marks = top.total_marks;
        }
        void display(){
            cout<<"Topper Name -> "<<student_name<<endl;
            cout<<"Topper Marks -> "<<total_marks<<endl;
        }
};

int main(){
    cout<<"\n################ MATHS ####################"<<endl;
    topper maths; 
    maths.display();
    cout<<"\n################ PHYSICS ##################"<<endl;
    topper physics("Sourabh Saraswat", 98);
    physics.display();
    cout<<"\n################ CHEMISTRY ################"<<endl;
    topper chemistry(physics);
    chemistry.display();
    cout<<endl;

    return 0;
}