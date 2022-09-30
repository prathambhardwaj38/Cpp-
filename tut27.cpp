//*****Friend Classes & Member Functions*****//
/*
In this lesson, we explore friend classes and making specific functions of another class(calculator) a friend function of a particular class(complex)
*/

#include <iostream>
using namespace std;

class complex;                                                              //forward declaration of classes 
class calculator;                                                           //forward declaration of classes 

class complex{                                                              //defining complex class
    private:
        // friend complex calculator :: complexSum(complex o1,complex o2);     //declaring individual funcions of calulator class as friends
        // friend int calculator :: realSum(complex o1, complex o2);           //These friend func declarations won't work, i.e., even though they're declared here, the functions
        // friend int calculator :: imaginarySum(complex o1, complex o2);      //still won't get access to private variables for reason explained below 
        friend class calculator;                                          //declaring entire class as friend, this is working 
        int real;       
        int imaginary;
    public:
        void setData(int a, int b);                                         //complex class func1 declare
        void getData(void);                                                 //complex class func2 declare
};

void complex::setData(int a,int b){                                         //complex class func1 defination
    real=a;
    imaginary=b;
}
void complex::getData(void){                                                //complex class func2 declaration
    cout<<"Your complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
}

class calculator{                                                           //defning calculator class
    public:
        complex complexSum(complex o1, complex o2);                         //calculator class func declarations 
        int realSum(complex o1, complex o2);
        int imaginarySum(complex o1, complex o2);
};

complex calculator::complexSum(complex o1, complex o2){                     //calculator class func definitions
    complex res ;
    res.setData( ( o1.real + o2.real ),( o1.imaginary + o2.imaginary ) );
    return res;
}
int calculator::realSum(complex o1, complex o2){
    int res = ( o1.real + o2.real );                                        //Here, since I have defined the calculator class later than complex class
    return res;                                                             //and in turn, declared it's member functions after defining them as friend functions
}                                                                           //in the complex class, although the syntax is correct over there, here while 
int calculator::imaginarySum(complex o1, complex o2){                       //defining the functions, they're unable to access private members of complex 
    int res = ( o1.imaginary + o2.imaginary );                              //despite already being friends, this is because even though class forward declaration for 
    return res;                                                             //calculator is done and friend func declaration syntax is correct, complier still doesn't know about its(calculator's) member functions and so declaring them
}                                                                           //as friend functions is useless, it'll only work if calculator class and it's member functions are 
                                                                            //defined before the complex class
int main(){

    complex o1,o2;
    o1.setData(1,3);
    o1.getData();
    o2.setData(4,8);
    o2.getData();
    calculator calc;
    complex totalSum = calc.complexSum(o1,o2);
    totalSum.getData();
    // cout<<totalSum<<endl;                                                //This line wasn't working because complex is a custom data type/class and iostream doesn't know how to output it 
    cout<<"The real part sum is "<<calc.realSum(o1,o2)<<endl;
    cout<<"The imaginary part sum is "<<calc.imaginarySum(o1,o2)<<endl;
    cout<<"The total sum of the two complex numbers is "<<calc.realSum(o1,o2)<<" + "<<calc.imaginarySum(o1,o2)<<"i";

    return 0;
}