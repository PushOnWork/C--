#include<iostream>
using namespace std;
class employee{
protected:
    string name;
    int id;
public:
    void employeedetails(string nm, int empid){
        this->name = nm;
        this->id = empid;
    }
};
class Teacher : public employee{
    string subject;
public:
    void teacherdetails(string sub){
        this->subject = sub;
    }
    void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Subject: " << subject << endl;
    }
};
class Clark : public employee{
    string department;
public:
    void clarkdetails(string dept){
        this->department = dept;
    }
    void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};
int main(){
    Teacher t;
    t.employeedetails("Alice", 101);
    t.teacherdetails("Mathematics");
    t.displayDetails();
    cout << endl;
    Clark c;
    c.employeedetails("Bob", 102);
    c.clarkdetails("Administration");
    c.displayDetails();
    return 0;
}