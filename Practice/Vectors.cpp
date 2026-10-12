#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> balances={5000,12000,8500};
    cout<<"Existing Balances are:"<<endl;
    for (size_t i=0;i<balances.size();i++){
        cout<<"Balance "<<i+1<<": Rs. "<<balances[i]<<endl;
    }
    balances.push_back(15000);
    cout<<endl<<"New Balances are:"<<endl;
    for(int balance:balances){
        cout<<"Rs. "<<balance<<endl;
    }
    cout<<endl<<"Total number of balances: "<<balances.size()<<endl;
    balances.pop_back();
    cout<<endl<<"After removing last balance: "<<balances.size()<<endl;
    return 0;
}
