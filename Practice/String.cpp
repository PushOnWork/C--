#include<iostream>
#include<string>
int main(){
    std::string str;
    std::cout<<"Enter a string: ";
    std::getline(std::cin,str);
    std::cout<<"The string is: "<<str<<std::endl;
    std::cout<<"Enter another string to modify the first string: ";
    std::string str2;
    std::getline(std::cin,str2);
    str+=str2;
    std::cout<<"The modified string is: "<<str<<std::endl;
    std::cout<<"Accessing the first character of the string safely: "<<str.at(0)<<std::endl;
    std::cout<<"Extracting a substring from the string: "<<str.substr(0,5)<<std::endl;
    std::cout<<"Enter the character to find in the string: ";
    char ch;
    std::cin>>ch;
    size_t pos=str.find(ch);
    std::cout<<"The position of the character in the string is: "<<pos<<std::endl;
    if(pos==std::string::npos){
        std::cout<<"Character not found in the string."<<std::endl;
    }
    else{
        std::cout<<"Character found at position: "<<pos<<std::endl;
    }
    std::string str3="Apple";
    if(str.compare(str3)==0)
        std::cout<<"The strings are equal."<<std::endl;
    if(str.compare(str3)<0)
        std::cout<<"The first string comes first in dictionary."<<std::endl;
    if(str.compare(str3)>0)
        std::cout<<"The second string comes first in dictionary."<<std::endl;
    return 0;
}