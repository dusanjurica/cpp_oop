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
    char blob[256];
    char meta[20];
    
public:
    BaseHeader();
    void st();
    void gt();
};

BaseHeader::BaseHeader()
{
    int * iter = new int();
    
    for (*iter=0; *iter<256; (*iter)++)
    {
        this->blob[*iter] = 'D';
    }
    
    for (*iter=0; *iter<20; (*iter)++)
    {
        this->meta[*iter] = 'E';
    }
    
    delete iter;
}

void BaseHeader::st(){

};

void BaseHeader::gt(){

    int* i=new int();
    
    void* arr[2];
    
    arr[0] = &meta;
    arr[1] = &blob;
    
    cout << "| " << arr[0] << " |" << endl;
    cout << "| " << arr[1] << " |" << endl;
    
    
    // Get value from the address in arr[]
    cout << "| " << *(char*)arr[0] << endl;
    cout << "| " << *(char*)arr[1] << endl;
    
    for (*i=0; *i<20; (*i)++)
    {
        cout << this->meta[*i];
    }
    
    for (*i=0; *i<256; (*i)++)
    {
        cout << this->blob[*i];
        //cout << *i << " : vypis binarniho blobu: " << this->blob[*i] << endl;
    }
    delete i;
};

BaseHeader inst;

int main(int argc, const char * argv[]) {

    inst.st();
    inst.gt();
    
    return 0;
};
