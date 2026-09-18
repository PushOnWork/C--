#include<iostream>
using namespace std;
class BankAccount{
    int accNo;
    string holderName;
    float balance;
    public:
        void setdata(int no,string name,float bal){
            this->accNo=no;
            this->holderName=name;
            this->balance=bal;
        }
        void transfer(BankAccount*b1){
            float amount;
            cout<<"Enter the amount to transfer: ";
            cin>> amount;
            this->balance=this->balance-amount;
            b1->balance=b1->balance+amount;
        }
        void display(){
            cout<<this->accNo<<"\t\t"<<this->holderName<<"\t\t"<<this->balance<<endl;
        }
};
int main(){
    BankAccount b1,b2;
    b1.setdata(1,"Arijit",2000);
    b2.setdata(2,"Pushkar",400000);
    b1.transfer(&b2);
    cout<<"Account No\tHolder Name\tBalance"<<endl;
    b1.display();
    b2.display();
    return 0;
}