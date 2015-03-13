//
//  main.cpp
//  mypg
//
//  Created by Dušan Jurica on 25.02.15.
//  Copyright (c) 2015 Dušan Jurica. All rights reserved.
//


#include <iostream>
#include <string>

using namespace std;

class BaseHeader
{
private:
    float A_num = 33.29;
    float B_num = 27.31;
    float pom;
    
public:
    void st();
    void gt();
};

void BaseHeader::st(){
    //this->pom = A_num*B_num;
    this->A_num *= 1200;
    this->B_num *= 4000;
};

void BaseHeader::gt(){
    printf("Hodnota A_num je %f\r\nHodnota B_num je %f\r\nJejich produkt je %f\r\n",
           A_num, B_num, pom);
};

BaseHeader inst;

int main(int argc, const char * argv[]) {

    inst.st();
    inst.gt();
    
    return 0;
};
