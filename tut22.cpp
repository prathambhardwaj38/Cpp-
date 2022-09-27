#include <iostream>
#include <string>
using namespace std;

/* OOps recap & Nesting of member functions in C++ */

// Stroustrup initially named C++ language as C with classes because C++ was almost the same as C language but they added a new concept of classes in it
// Classes are just the extension of structures in C language
// Structures had limitations, such as
//                           --Can't define private or public members, everything is public by default
//                           --can't deifine methods/functions inside of classes
// Classes have both of these added functionalities
// In C++, classes can be declared along with class declaration as shown below
/* class employee{
        //class definition
} harry, pratham, rohan; */
// If one member function is called inside another member function of the same class, it is called nesting of functions

class binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void show(void);
    void ones_compliment(void);
} digit;

void binary ::read(void)
{
    cout << "Enter the binary number " << endl;
    cin >> s;
    check_binary();
    show();
}

void binary ::show(void)
{
    cout << "Your binary number is : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;  //I had put endl next to cout<< s.at(i), but in the result, each element got printed in a separate line becausee during each iteration, endl got printed 
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))  //Here, I had simply compared the i'th element with numeric 0 or 1, which threw an error, because we have inputted the binary number in a string, while it may be made of 0's and 1's, its being treated as a string of characters, so we have to use '0' and '1'
        {
            cout << "Invalid Binary number";
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    show();
}



int main()
{
    digit.read();
    digit.ones_compliment();

    cout<<"Testing something";
    return 0;
}

