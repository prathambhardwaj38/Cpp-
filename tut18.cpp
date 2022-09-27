#include <iostream>
using namespace std;

//*****Recursion*****//
//Calling a function within a function, in some cases, like in factorial program, it makes the code very easy 

int factorial(int a);
int fibonacci(int a);

int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    cout<<"The number at sequence "<<num<<" of fibonacci series is "<<fibonacci(num)<<endl;


    return 0;
}

int factorial (int a){          //Here, recursion is helpful and makes the program simpler 
    if (a<2){
        return 1;
    }
    else return (a*factorial(a-1));
}

int fibonacci(int a){          //Here, recursion causes overhead 
    if (a<2){
        return 1;
    }else
    return (fibonacci(a-1)+fibonacci(a-2));
}