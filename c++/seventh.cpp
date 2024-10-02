#include<iostream>
using namespace std;
int c=45;
int main(){
    int a,b,c;
    cout<<"value of a is \n";
    cin>>a;

    cout<<"Value of b is \n";
    cin>>b;

    c=a+b;

    cout<<"value of a+b is "<<c<<endl;
    cout<<"value of global variable c is "<<::c;
    return 0;
}