#include <iostream>
#include "test.h"

void cTxn::set_classname(std::string name){
    class_name = name;
}

std::string cTxn::get_classname(){
    return class_name;
}

int main()
{
    std::cout << "Hello World" << std::endl;

    cTxn test;
    test.test1();
    std::cout << test.a << std::endl;
    
    test.set_classname("NEW CLASS_NAME");

    std::cout << test.get_classname() << std::endl;

    return 0;
}
