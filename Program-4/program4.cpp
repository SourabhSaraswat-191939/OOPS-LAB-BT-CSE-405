// #include<iostream>
// #include<math.h>
// using namespace std;
// float power(float m,int n)
// {
//     float t;
//     t=pow(m,n);
//     return t;
// }
// float power(float m)
// {   
//     int n=2;
//     float t;
//     t=pow(m,n);
//     return t;
// }

// void display(float data)
// {
//     cout<<"\nYour Answer is = "<<data<<endl<<endl;
// }
// int main()
// {
//     float m,ans;
//     int n;
//     cout<<"\nEnter Base Value m : ";
//     cin>>m;
//     cout<<"Enter The Power Value n (to use default value of n, enter -1) :";
//     cin>>n;
//     if(n==-1)
//     {
//         ans=power(m);
//     }
//     else
//     {
//         ans=power(m,n);  
//     }
//     display(ans);  
//     return 0;
// }



#include <iostream>
#include <math.h>
using namespace std;

float power(float num, int power)
{
    return pow(num,power);
}
float power( float num)
{
    int power = 2;
    return pow(num,power);
}
void display(float data)
{
    cout<<"result  is :"<<data<<endl;
}

int main()
{
    int pow;
    float num,result1,result2;
    cout<<"enter number value = ";
    cin>>num;
    cout<<"enter power value = ";
    cin>>pow;
    cout<<"With default Power"<<endl;
    result1 =power(num);
    display(result1);
    cout<<"With Entered Power"<<endl;
    result2 =power(num,pow);
    display(result2);
    return 0;
}
