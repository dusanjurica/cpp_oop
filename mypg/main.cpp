//
//  main.cpp
//  mypg
//
//  Created by Dušan Jurica on 25.02.15.
//  Copyright (c) 2015 Dušan Jurica. All rights reserved.
//


#include <iostream>
#include <ConditionalMacros.h>

using namespace std;

class base_header{
private:
    float A_num = 33.29;
    float B_num = 27.31;
    float pom;
    
public:
    void st();
    void gt();
};

void base_header::st(){
    pom = A_num*B_num;
};

void base_header::gt(){
    printf("Hodnota A_num je %f\r\nHodnota B_num je %f\r\nJejich produkt je %f\r\n",
           A_num, B_num, pom);
};

base_header inst;

enum class valid_states {ON, HIGH_Z, OFF};

valid_states switchka;

int main(int argc, const char * argv[]) {

    
    inst.st();
    inst.gt();
    
    return 0;
};
