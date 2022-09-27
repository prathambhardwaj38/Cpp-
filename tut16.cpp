#include <iostream>
using namespace std;
//*****Call by Value and Call by Reference*****//
//Both of these are just methods of using functions
//In call by value, we simply pass the value of parameters
//Note that passing value of parameters means that our actual variables aren't affected by anything that might happen inside the function 
//In call by reference, we make us of the function using pointers or reference variables which point towards the actual variable in our main program
//Note that in case of call by reference, values are actually affected 

void swapCallByValue(int ,int );
void swapCallByPointers(int*, int*);
void swapCallByReference(int &a, int &b);

int main(){

    int num1, num2;
    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    cout<<"The current value of num1 and num2 is "<<num1<<" & "<<num2<<endl;
    // swapCallByValue(num1,num2); //This won't return swapped value
    // swapCallByPointers(&num1,&num2); //Since the parameters for the function are pointers, we have to pass addresses //This will swap the values of actual parameters as well
    swapCallByReference(num1,num2); //Here, we made use of reference variables leart in tut7, this will also work since reference variables also point to the same location, the don't store addresses in them, but perform in a similar way to pointers
    cout<<"The current value of num1 and num2 is "<<num1<<" & "<<num2;
    



    return 0;
}

void swapCallByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

void swapCallByPointers(int* a,int* b){
    int temp= *a;
    *a = *b;
    *b= temp;
}

void swapCallByReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}