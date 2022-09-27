#include<iostream> 
using namespace std;
int main()
{
    int a=4, b=5;
    cout<< "Operators in C++ \n";
    cout<< "Following are the types of operators in C++ ";
    cout<<"\n Arithmetic Operators \n";
    cout<<"Value of a+b is "<<a+b <<endl;
    cout<<"Calue of a-b is "<<a-b <<endl;
    cout<<"Value of a*b is "<<a*b <<endl;
    cout<<"value of a/b is "<<a/b <<endl;
    cout<<"value of a%b is "<<a%b <<endl;
    cout<<"Value of a++ is "<<a++ <<endl;
    cout<<"Value of a-- is "<<a-- <<endl;
    cout<<"Value of ++b is "<<++b <<endl;
    cout<<"Value of --b is "<<--b <<endl;
    cout<<endl;
    cout<<"Assignment operator";
    a=7;
    b=10;
    cout<<"The value of a has become "<<a<<" and the value of b has become "<<b;
    cout<<endl;
    cout<<endl;
    cout<<"Comparison Operators \n";
    cout<<"Value of (a=b) is "<<(a==b)<<endl;
    cout<<"Value of (a>b) is "<<(a>b)<<endl;
    cout<<"Value of (a<b) is "<<(a<b)<<endl;
    cout<<"Value of (a!=b is "<<(a!=b)<<endl;
    cout<<"Value of (a<=b) is "<<(a<=b)<<endl;
    cout<<"Value of (a>=b) is "<<(a>=b)<<endl;
    cout<<endl;
    cout<<"Logical Operators \n";
    cout<<"Value of (a==b) && (a>b) is "<<((a==b)&&(a>b))<<endl;
    cout<<"Value of (a==b) || (a<b) is "<<((a==b)||(a<b))<<endl;
    cout<<"Value of (!(a==b)) is "<<(!(a==b))<<endl;
    cout<<"Value of (!a<=b) is "<<(!(a<=b))<<endl;
     

    return 0;
}
