#include<iostream>
using namespace std;
class Employee{
    int empId;
    string empName;
    float empSalary;
    public:
        void setdata(int id,string name,float sal){
            this->empId=id;
            this->empName=name;
            this->empSalary=sal;
        }
        void larger(Employee e1,Employee e2){
            if(e1.empSalary>=e2.empSalary){
                this->empId=e1.empId;
                this->empName=e1.empName;
                this->empSalary=e1.empSalary;
            }
            else{
                this->empId=e2.empId;
                this->empName=e2.empName;
                this->empSalary=e2.empSalary;
            }
        }
        void display(){
            cout<<this->empId<<"\t\t"<<this->empName<<"\t\t"<<this->empSalary<<endl;
        }
};
int main(){
    Employee e1,e2,e3;
    e1.setdata(1,"Pushkar",200000);
    e2.setdata(2,"Arijit",40000);
    e3.larger(e1,e2);
    cout<<"Employee id\tEmployee Name\tEmployee Salary"<<endl;
    e1.display();
    e2.display();
    e3.display();
    return 0;
}