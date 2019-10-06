# include <iostream>
# include <string>
//# include "iostream"
//# include "iostream.h"

int main(){
    std::string name = "";
    std::cout <<"Enter your name: ";
    std::cin  >>name;
    std::cout <<"Hello, " << name <<"!\n" <<std::endl;
    return 0;
}