#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"following are the Arithmetic Operator\n";
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl; 
    cout<<endl;

    cout<<"Following are the comparison operator are\n";
    cout<<"Value of a==b is "<<(a==b)<<endl;
    cout<<"Value of a!=b is "<<(a!=b)<<endl;
    cout<<"Value of a<=b is "<<(a<=b)<<endl;
    cout<<"Value of a>=b is "<<(a>=b)<<endl;
    cout<<"Value of a>b is "<<(a>b)<<endl;
    cout<<"Value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    cout<<"Following are the logical operator are\n";
    cout<<"Value of ((a==b)&&(a<=b)) is "<<((a==b)&&(a<=b))<<endl;
    cout<<"Value of ((a==b)||(a<=b)) is "<<((a==b)||(a<=b))<<endl;
    cout<<"Value of (!(a==b)) "<<(!(a==b))<<endl;

    return 0;

}