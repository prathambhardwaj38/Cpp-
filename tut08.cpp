#include <iostream>
#include <iomanip>
using namespace std;


int main() {


//*****Constants in C******
//  int a=5, b=6;
//  const int c = 38;
//  cout<<"a and b have been declared as variables, their current values are "<<a<<" and "<<b<<" respectively."<<endl;
//  cout<<"c has been declared as a constant with a value of "<<c<<endl;
//  a=6;
//  b=7;
//  cout<<"Values of a and b have been changed now, and they've become " <<a<<"& "<<b<<endl;
//  cout<<"but if we try to change the value of c, we'll get an error"<<endl;
//  c=4;


// *****Manipulators in C*****
// maipulators are element that let us tinker with the formatting / display of the output, like endl
// another manipulator is setw() which is a part of #include<iomanip>
int a=1,b=12,c=123,d=1234;
cout<<"Without setw";
cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
cout<<"with setw"<<endl;
cout<<setw(4)<<a<<endl<<setw(4)<<b<<endl<<setw(4)<<c<<endl<<setw(4)<<d<<endl;


//*****Operator Precedence*****
//In C there's a certain order and priority according to which the operators in our programme are parsed
//These can be checked on en.cppreference.com
//For operators with same level of presendence, we check according to the associativity, sometimes left to right and sometimes right to left 


    return 0;
}