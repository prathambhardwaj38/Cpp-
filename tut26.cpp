//*****Friend Functions Part 1*****//
/*Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class.
It is necessary to write the prototype of the friend function.
One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class.
An example program to demonstrate the concept of friend function is shown below
*/

#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    void setData(int a, int b);
    void getData(void);
    friend complex complexSum(complex o1, complex o2); // Here, we have declared complexSum() function as a frind func of the class, so it's allowed to access the private variabes
                                                       // Note: it doesn't matter where we do the declaration as long as it's withing the class, it can be done wither in private, or in the public section
};
void complex::setData(int a = 0, int b = 0)
{
    real = a;
    imaginary = b;
}
void complex::getData(void)
{
    cout << "Your complex number is " << real << " + " << imaginary << "i" << endl;
}

int main()
{

    complex num1, num2, sum;
    num1.setData(1, 3);
    num1.getData();
    num2.setData(4, 9);
    num2.getData();
    sum = complexSum(num1, num2);
    sum.getData();

    return 0;
}

complex complexSum(complex o1, complex o2)
{                                                                       // Defining the friend function, it's defined like any other normal function
    complex result;                                                     // Interesting thing to note here is that since we defined he function at the bottom, the friend declaration also works as the prototype declaration
    result.setData((o1.real + o2.real), (o1.imaginary + o2.imaginary)); // for the function
    return result;
}
/*
Properties of Friend Function
1.Not in the scope of the class
2.Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
3.A friend function can be invoked without the help of any object
4.Usually contain objects as arguments
5.Can be declared under the public or private access modifier, it will not make any difference
6.It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
*/