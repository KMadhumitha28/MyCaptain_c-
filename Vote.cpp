#include <iostream>

using namespace std;

int main(){
    int age{0};
    bool verify{true};
    
    while(verify!=false){
        cout<<"Welcome to the voting machine.\nPlease enter your age: "<<endl;
        cin>>age;
        if(age<=0){
            cout<<"Please enter the valid age!"<<endl; 
        }
        else if(age>0 && age<18){
            cout<<"Sorry you are not eligible to vote!\nPlease wait for "<<(18-age)<<" years to vote"<<endl;
            verify=false;
        }
        else{
            cout<<"You are eligible to vote!"<<endl;
        }
    }
    return 0;
}
