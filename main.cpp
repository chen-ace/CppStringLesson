#include <iostream>
#include "ChenString.h"

using namespace feng;

int main() {
    std::cout << "Hello, World!" << std::endl;
    ChenString string(5) ;
    std::cout <<"现在容量是:"<<string.cap<<std::endl;
    string = "111";
    std::cout <<"现在数据是:"<<string<<std::endl;
    std::cout <<"现在容量是:"<<string.cap<<std::endl;
    string += "222";
    std::cout <<"现在数据是:"<<string<<std::endl;
    std::cout <<"现在容量是:"<<string.cap<<std::endl;
    string += "333444555";
    std::cout <<"现在数据是:"<<string<<std::endl;
    std::cout <<"现在容量是:"<<string.cap<<std::endl;
    return 0;
}
