//*****Dynamic Initialization of Objects using Constructors*****//
/*
This time, we'll see how to intialize objets based on different inputs we might've gotten from the user 
*/


//This program asssumes that the interest being entered, if in % format, will be a whole number, i.e not fractinal like 14.6 

#include <iostream>
using namespace std;

class bankDeposit;
float calculateAmount(int p,float r, int t);

class bankDeposit{
    friend float calculateAmount(int p, float r, int t);
    private:
        int principal;
        float interestRate;
        int timePeriod;
        float finalAmount;
        static int count;
    public:
        bankDeposit(void){      //This one is so that we can create  blank class objects    
            int p; float R; int t; int r;
            if (count==0)                                                                                   //This if else is to make sure that the correct object number is printed always 
                cout<<"Enter the principal, rate of interest and time period for object no. 1 "<<endl;
                
            else                                
                cout<<"Enter the principal, rate of interest and time period for object no. "<<count+1<<endl;
            cin>>p>>R>>t;
            //cout<<p<<endl<<R<<endl<<t<<endl; ////////
            if (R>=1)
            {
                r=R;
                bankDeposit(p,r,t);         //Here, we can also do bankDeposit(p, int(R), t) to directly call the int type overload function without creating an extra variable, making use of "typecasting" more efficiently 
            }
            else
                //cout<<p<<endl<<R<<endl<<t<<endl; ////////
                bankDeposit(p,R,t);
        }
        bankDeposit(int p,int r, int t){
            //cout<<"int type was called"; ///////
            count++;
            principal = p;
            interestRate= (float(r)/100);   //Since i want a floating result, I'll first have to type cast the variable being operated on into float data type
            timePeriod=t;
        }
        bankDeposit(int p, float r, int t){
            count++;
            //cout<<p<<endl<<r<<endl<<t<<endl;  ////////
            if ((0<r)&&(r<1))
            {
                principal=p;
                //cout<<p<<endl<<principal<<endl;
                interestRate=r;
                timePeriod=t;
                cout<<principal<<endl<<interestRate<<endl<<timePeriod<<endl;  ////////
            }
            else
            {
                cout<<"Invalid interest rate, please enter a number between 0 and 1";
                cin>>r;
                while(!((0<r)&&(r<1)))                                                                     //Use of if-else and while loop for validation purposes 
                {
                    cout<<"Invalid interest rate, please enter a number between 0 and 1";
                    cin>>r;
                }
                principal=p;
                interestRate=r;
                timePeriod=t; 
            }
        }
        void display(void);
};
int bankDeposit :: count;

void bankDeposit :: display(void){
    cout<<principal<<endl<<interestRate<<endl<<timePeriod<<endl;      ////////
    finalAmount=calculateAmount(principal, interestRate, timePeriod);
    cout<<"The principal was "<<principal<<endl
        <<"The interest rate applied was "<<interestRate<<endl
        <<"Hence, the final amount comes out to be "<<finalAmount<<endl;
}

float calculateAmount(int p, float r, int t){
    //cout<<p<<endl<<r<<endl<<t<<endl;                  ////////This is where its going wrong 
    float amount;
    amount = p*(1+r);
    return amount;
}

int main(){

    bankDeposit bd1;// bd2(1000,4,1);
    //bankDeposit bd3(1000,0.04f,1);                          //had to write 0.04f here because by default, it was being treated as a double and hence conflicting with the data type expeted by my constructors 
    bd1.display();
    //bd2.display();
    //bd3.display();
    //bd4.display();


    return 0;
}



/*
In this code too, I tried to do something but failed
I wanted to write the code in such a manner that :
    -> For each object created, if the arguments haven't been passed, the default constructor would run and ask the user for the values and then pass them along to other suitable construcor(overloaded constructors)
    -> but I can't figure out how to pass values to the relevant constructor based on the data type of input entered by the user, I can do it if I create seperate unique functions for the two cases, but can't figure out
    -> how to do it just by using constructors 


    update: I think I solved this issue and many subsequent ones too, but a new problem cropped up
    Up till the end of float overloader, the values of principal, interest and time are being assigned as they should be
    but as soon as i check the values in the display functions, it's showing some arbritrary garbage value which I can't tell where it is coming from
    or what is causing this abrupt change of values .
*/


/*Key things learnt 
1. In C++, when using a number, by default its assigned the type - double 
2.//Since i want a floating result, I'll first have to type cast the variable being operated on into float data type
3. While using comparison operators, (0<r<1) is the wrong format and compiler will only evaluate 0<r, correct: (0<r && r<1)
*/