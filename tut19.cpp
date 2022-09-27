#include <iostream>
using namespace std;

// *****Function Overloading*****//
//Is a part of polymorphism, we use the same name to define different functions and call them on the basis of their arguments

int volume(int , int h);
int volume(int );
int volume(int , int h, int l);

float pi=3.14;

int main(){

    cout<<"Volume of the cylinder will be "<<volume(3,7)<<endl;
    cout<<"Volume of the cube will be "<<volume(7)<<endl;
    cout<<"Volume of the cuboid will be "<<volume(3,7,11)<<endl;
    return 0;
}

int volume(int r, int h){
    return(pi*r*r*h);
}
int volume(int a){
    return(a*a*a);
}

int volume(int l, int b, int h){
    return(l*b*h);
}