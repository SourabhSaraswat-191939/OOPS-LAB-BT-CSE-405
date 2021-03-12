#include <iostream>
using namespace std;

int factorial(int n){
    if (n<1){
        return 1;
    }
    return n*factorial(n-1);
}

void display(int result){
    cout<<"\nYour Answer : "<<result<<endl<<endl;
}

int main(){
    int num,ans;
    cout<<"\nEnter Number to find factorial : ";
    cin>>num;
    ans = factorial(num);
    display(ans);

    return 0;
}