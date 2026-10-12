#include <iostream>
#include <vector>
int main() {
    std::vector<int> numbers = {1000,2500,4000};
    std::cout<<"Second Number: "<<numbers.at(1)<<std::endl;
    numbers.clear();
    numbers={2000,5000};
    std::cout<<"Initial size: "<<numbers.size()<<std::endl;
    numbers.push_back(7000);
    numbers.push_back(9000);
    std::cout<<"Final size: "<<numbers.size()<<std::endl;
    numbers.clear();
    numbers={1000,2000,3000,4000};
    int sum=0;
    for(int value:numbers){
        sum+=value;
    }
    std::cout<<"Sum= "<<sum<<std::endl;
    numbers.pop_back();
    numbers.push_back(4500);
    for(int value:numbers){
        std::cout<<value<<"\t";
    }
    std::cout<<std::endl;
    return 0;
}