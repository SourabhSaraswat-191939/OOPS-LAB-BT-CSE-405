#include<iostream>
#include<math.h>
using namespace std;
float power(float m,int n)
{
    float t;
    t=pow(m,n);
    return t;
}
float power(float m)
{   
    int n=2;
    float t;
    t=pow(m,n);
    return t;
}

void display(float data)
{
    cout<<"\nYour Answer is = "<<data<<endl<<endl;
}
int main()
{
    float m,ans;
    int n;
    cout<<"\nEnter Base Value m : ";
    cin>>m;
    cout<<"Enter The Power Value n (to use default value of n, enter -1) :";
    cin>>n;
    if(n==-1)
    {
        ans=power(m);
        display(ans); 
    }
    else
    {
        ans=power(m,n);
        display(ans);    
    }
    return 0;
}
