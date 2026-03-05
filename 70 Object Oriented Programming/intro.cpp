#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age, roll_number;
    string grade;
    //Function Getter and Setter
    public:
    void setName(string n) {
        if(n.size()==0){
            cout<<"Invalid Name";
            return;
        }
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setRoll(int r) {
        roll_number = r;
    }
    void setGrad(string s) {
        grade = s;
    }

    void getName() {
        cout<<name<<endl;
    }
    int getRoll() {
        return roll_number;
    }
    string getGrade(int pin) {
        if(pin == 123) {
            return grade;
        }
        return "Wrong Pin";
    }
};

int main() {
    // Student s1;
    // s1.name = "Ravi Saini";
    // s1.age = 23;
    // s1.roll_number = 21;
    // s1.grade = "A+";

    // //print all the values
    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
    // cout<<s1.roll_number<<endl;
    // cout<<s1.grade<<endl;
    Student s1;
    s1.setName("");
    s1.setAge(20);
    s1.setGrad("A");
    s1.setRoll(23);

    s1.getName();
    int age = s1.getRoll();
    cout<<age<<endl;

    cout<<s1.getGrade(123)<<endl;
}