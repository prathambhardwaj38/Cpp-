#include <iostream>
#include <string>
using namespace std;

/* Memory allocation in Class Objects and using arrays inside classes */
//Memory is only allocated to variables of the class when the object is declared 
//Memory is not allocated to variables when class is declared
//But memory is allocated to class functions when the class is declared 
//Hence, objects don't have individual copies of the functions which will be common amongst all objects of the same class, they are shared for efficient memory management 

class shop{
private:
    string itemName[10];
    int itemID[10];
    
    int itemPrice[10];
    int counter;
    int numOfEntries;
public:
    void setDetails(void);
    void showStats(void);
    void initializeCounter(void){ counter =1;}
    void incrementCounter(void);
    void setNumberOfEntries(void);
};

void shop :: setDetails(void){

    initializeCounter();
    for(int i=0;i<counter;i++){
    cout<<"Enter the name of the item : "<<endl;
    cin>>itemName[i];
    cout<<"Enter item ID : "<<endl;
    cin>>itemID[i];
    cout<<"Enter item price : "<<endl;
    cin>>itemPrice[i];
    incrementCounter();
    }
}

void shop :: showStats(void){
    cout<<"S.no\t\tItem Name\t\tItemID\t\tItemPrice"<<endl;
    for(int i=0;i<counter;i++){
        cout<<i+1<<"\t\t"<<itemName[i]<<"\t\t"<<itemID[i]<<"\t\t"<<itemPrice[i]<<endl;
    }
}

void shop :: incrementCounter(void){
    if(counter<numOfEntries){
        counter ++;
    }
}

void shop :: setNumberOfEntries(void){
    cout<<"How manny entries do you want to make ? "<<endl;
    cin>>numOfEntries;
}

int main(){

    shop dukaan;
    dukaan.setNumberOfEntries();
    dukaan.setDetails();
    dukaan.showStats();

    return 0;
}