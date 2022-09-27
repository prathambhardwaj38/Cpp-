#include <iostream>
using namespace std;

//*****Inline functions, default arguments, Constant arguments and Static Variables*****//
//Inline Functions
//Inline functions are used in case when the function is needed to be used/caled numerous times throughout the programme
//Calling a function has many elements, arguments need to be passed, the values are copied into formal arguments, function is executed, the result is returned which then placed at the position wher ethe function was orignally called
//To reduce all this overhead, we can simply use inline functions, where instead of passing arguments and then performing the task, the coed of the function itself is replaced at the place wher eit's called during compilatin 
//Keeping that in mind, inline functions should only be used when the func being made inline has small amount of code and is relatively simple 
//Following things are not adivsed to be used inside an inline func/ func with following elements should not be made into inline functions:
//Recursion, loops, static variables, etc 

//Static Variables 
//Static variables inside a function are only initialized once and their values are saved every time the function is called without being destroyed like the other variables 

//Default Arguments 
//When defining a function, we can also set a default value for some paramenters so that even if the function is called using only one(the compulsory argument), it can still be executed using the default value defined for the other argument 

//Constant Argument 
//Sometimes, if we want that the argument/parameter being passed should not be modified while executing the function, we making it a constant argument using the const keyword

int product(int a, int b=1);//Here, b becomes a default argument with the default value of 1, if some other value is passed into b, that wll be evaluated, if not, b will be treated as 1
int strlen( char *c);

int main(){
    int a, b;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;
    cout<<"The product of the two numbers is "<<product(a,b)<<endl;
    cout<<"This time, we won't pass any value for b, the product becomes : "<<product(a)<<endl;
    cout<<"This time, we won't pass any value for b, the product becomes : "<<product(a)<<endl;
    cout<<"This time, we won't pass any value for b, the product becomes : "<<product(a)<<endl;//These multiple code lines are for demonstrating the 
    cout<<"This time, we won't pass any value for b, the product becomes : "<<product(a)<<endl;//working of the static variable c in the function definition
    cout<<"This time, we won't pass any value for b, the product becomes : "<<product(a)<<endl;




    return 0;
}

inline int product(int a, int b){   //Since we used a function declaration, the default value had to be declared over there, if we weren't using the func declaration, we would define it here only 
    static int c=0;
    c++; 
    return a*b+c;
    
}

int strlen(const char *c){ //Now, c is made a constant argument, meaning it won't be changed during the execution, note that constant arguments become relevant in case of reference variables or pointers only 
int length=0;
return length;
}


//Also, remember that the default rguments must be defined at the right most side, the compulsory arguments must come first 