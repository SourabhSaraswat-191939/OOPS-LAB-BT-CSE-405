#include<iostream>
using namespace std;
class String{
    private:
        string word;

    public:
        String(string input=""){
            word = input;
        }
        string getString()
		{
			return word;
		}
        void display(){
            cout<<"Value of word = "<<word<<endl;
        }
        String operator + (String s){
            String result_string;
            result_string = word+" "+ s.word;
            return result_string;
        }
        bool compare(string s){
            if(word.length()==s.length()){
                for(int i=0; i<word.length();i++){
                    if(word[i]!=s[i])
                        return false;
                }
                return true;
            }
            return false;
        }
};

int main(){
    string first_string, second_string;
    cout<<"\nEnter First String = ";
    cin>>first_string;
    String s1(first_string);
    s1.display();
    cout<<"Enter Second String = ";
    cin>>second_string;
    String s2(second_string);
    s2.display();
    cout<<endl<<"#######################  Comparing Both String  #######################"<<endl;
    s1.compare(s2.getString()) ? cout<<"Matched"<<endl : cout<<"Not Matched"<<endl;

    cout<<endl<<"#######################  After Adding Both String  #######################"<<endl;
    String s3 = s1 + s2;
    s3.display();
    cout<<endl;
    return 0;
}