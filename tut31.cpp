//*****Constructor Overloading*****//
// Same as function overloading just done with constructors in this case, compiler automatically identifies which constructor definition to use based on the number and types of argumnts passed

#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int a=0, int b=0)
    {
        real = a;
        imaginary = b;
    }
    complex(int a=0)
    {                  // Here, I'm creating three default constructors to properly understand the concept of constructor overloading, these work perfectly for
        real = a;      // given type and number of arguments, if two arg given, 1st runs, if one arg given, 2nd runs, if no arg given, 3rd runs
        imaginary = 0; // my key takeaway from this is that constructor overloading and declaring default parameter value might clash sometimes as
    }                  // if in 1st, I give a and b default val of 0( assuming that the 3rd overloading func doesn't exist), and then try to make an object with only parameters then it won't work
    /*complex(void)    //because the compiler won't know whether to use default value from overloading 1 or use the function overloading 2   
    {                  //and in such a case, making an object without any arguments will also become an issue if we set a default value in both overloading 1 and overloading 2
        real = 0;       
        imaginary = 0;
    }*/
    void printNumber(void);
};

void complex ::printNumber(void)
{
    if (imaginary != 0)
        cout << real << " + " << imaginary << "i" << endl;
    else
        cout << real << endl;
    ;
}

int main()
{

    complex o1(4, 5), o2, o3(5);
    o1.printNumber();
    o2.printNumber();
    o3.printNumber();

    return 0;
}

                        //In this file, I'nm leaving some intentional errors to let the concepts be better illustrated 