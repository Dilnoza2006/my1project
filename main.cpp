#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //int age;
    //cout << "Hello how old are you?" << endl;
    //cout << "your age:";
    //cin>> age;
    //cout<<"so, your age : "<<age<<endl;
   // return 0;

    //problem1
    // string name;
    // int age;
    // cout << "please,enter your name: ";
    // cin >> name;
    // cout << "ok," <<name<< "how old are you?"<<endl;
    // cin >> age;
    // cout << " you are " <<name<<endl;
    // cout<<"you are "<<age<<"years old"<< endl;
    // return 0;

    // int a=1 ,b=2 ,c=3, d=4 ,e=5;
    // cout<<setw(5)<<a<<endl;
    // cout<<setw(5)<<b<<endl;
    // cout<<setw(5)<<c<<endl;
    // cout<<setw(5)<<d<<endl;
    // cout<<setw(5)<<e<<endl;
    // return 0;

    //problem3
    // int a,b;
    // cout << "Hello  , enter first integer";
    // cin >> a;
    // cout << "enter second integer";
    // cin >> b;
    // cout << "before swapping" <<endl;
    // cout << "first integer is " << a << endl
    // << "second integer is " << b << endl;
    //
    // int temp=a;
    // a=b;
    // b=temp;
    // cout << "after swapping" <<endl;
    // cout << "first integer is " << a << endl;
    // cout << "second integer is " << b << endl;
    // return 0;

    string input;
    cout << "Please enter a string" << endl;
    cin >> input;
    int width=50;
    int padding=(width-input.length())/2;
    cout<<setw(padding)<<input<<setw(padding)<<endl;

    return 0;
}

