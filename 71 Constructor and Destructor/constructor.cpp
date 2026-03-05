#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:
    //default constructor function
    Customer () 
    {
        name = "Rohit";
        account_number = 49;
        balance = 1000;
    }

    // // parameterised constructor
    // Customer (string a, int b, int c) {
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }

    //inline constructor
    inline Customer(string a, int b, int c): name(a), account_number(b), balance(c){
        
    }

    //functin overloading
    Customer (string name, int account_number) {
        this->name = name;
        this->account_number = account_number;
    }

    void display() {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main() {
    Customer A1;
    Customer A2("Ravi", 23, 5000);
    Customer A3("Nitin", 50);
    A1.display();
    A2.display();
}