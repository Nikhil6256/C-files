#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if((age<18)&&(age>0)){
        cout<<"This is a Adult Party.You are not eligible for this Party."<<endl;
    }
    else if(age==18){
        cout<<"You will get thee kid pass for this party"<<endl;
    }
    else if(age<1){
        cout<<"You are not born yet"<<endl;
    
    }
    else{
        cout<<"You will get the pass.Collect from below"<<endl;
    }
    return 0;
}