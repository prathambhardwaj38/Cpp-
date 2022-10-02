#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<< "Enter the value of num 1 \n";  //'<<' is called an insertion operator //
    cin>> num1; //'>>' is called the extraction operation
    cout<< "Enter the value of num2";
    cin >> num2; //'>>' is an extraction operation

    cout << "the sum is "<< num1 +num2; //'<<' is an insertion operation 

    return 0;
}
