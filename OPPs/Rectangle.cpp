#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    public:
        void setdata(int l,int b){
            this->length=l;
            this->breadth=b;
        }
        Rectangle add(Rectangle r1,Rectangle r2){
            Rectangle r3;
            r3.length=r1.length+r2.length;
            r3.breadth=r1.breadth+r2.breadth;
            return r3;
        }
        void area(){
            cout<<"Area = "<<this->breadth*this->length<<endl;
        }
};
int main(){
    Rectangle r1,r2,r3;
    r1.setdata(2,3);
    r2.setdata(4,5);
    r3=r3.add(r1,r2);
    r3.area();
    return 0;
}