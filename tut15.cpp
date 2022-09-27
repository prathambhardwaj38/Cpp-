#include <iostream>
using namespace std;
//*****Function and function prototypes*****//
//You alreadt know what functions are, and you also know what function prototypes are, but for the sake of definition,
//Function prototypes go in the starting of the code to tell the compiler that such a function will come in the file later on so that it doesn't throw an error then and there 

//Now, when declaring the function prototype, we have to follow "type func_name (parameters)" syntax
int sum(int, int);
void greet(void);

int main(){
    greet();
    int num1,num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is "<<sum(num1,num2); 
    return 0;
}

int sum(int a, int b ){
    int c=a+b;
    return c;
}

void greet(){
    cout<<"Hello, nice to see you're working towards your goals, don't stop, keep it up !"<<endl;
}