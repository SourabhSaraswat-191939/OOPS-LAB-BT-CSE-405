#include<iostream>  
  
using namespace std;  
  
class String  
{  
    
public:  
    char str[20]; //member variable for string input  
    void input() //member function  
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    void display() //member function for output  
    {  
        cout<<"String: "<<str;  
    }  
    String operator+(String s) //overloading   
    {  
        String obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
    int operator ==(String s)
        {
               if(!strcmp(str,s.str))
                return 1;

                return 0;
        }
};  

int main()  
{  
    String str1,str2,str3; //creating three object  
    str1.input();  
    str2.input();  
    str3=str1+str2;  
    str3.display(); //displaying  
    cout<<"\n String 1 => "<<str1.str<<endl;
    cout<<"\n String 2 => "<<str2.str<<endl;
    if(str1.str==str2.str)
    {
        cout<<"\n strings are equal\n";
    }
    else
    {
        cout<<"\n strings are not equal";
    }
    
}