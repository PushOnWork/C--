#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    int m1, m2, m3;
    int total;
    float avg;
public:
    void setdata(string n, int r, int a, int b, int c){
        this->name = n;
        this->rollno = r;
        this->m1 = a;
        this->m2 = b;
        this->m3 = c;
        this->total = (this->m1+this->m2+this->m3);
        this->avg = this->total/3.0;
    }
    void display(student s[],int size){

        cout<<"Name\tRoll\tMarks 1\tMarks 2\tMarks 3\tTotal\tAverage"<<endl;
        for(int i=0; i<size; i++){
            cout<<s[i].name<<"\t"<<s[i].rollno<<"\t"<<s[i].m1<<"\t"<<s[i].m2<<"\t"<<s[i].m3<<"\t"<<s[i].total<<"\t"<<s[i].avg<<endl;
        }
    }
};
int main(){
    student s[2];
    s[0].setdata("Pushkar",1,100,100,90);
    s[1].setdata("Arijit",2,1,1,9);
    s->display(s,2);
    return 0;
}