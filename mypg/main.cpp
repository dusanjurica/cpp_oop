//
//  main.cpp
//  mypg
//
//  Created by Dušan Jurica on 25.02.15.
//  Copyright (c) 2015 Dušan Jurica. All rights reserved.
//

class base_header{
public:
    enum t_delta {key0, key1, key2, key5=5, key10=10, key20=20} delta;
};

#include <iostream>
#include <ConditionalMacros.h>

using namespace std;

base_header inst;

enum class valid_states {ON, HIGH_Z, OFF};

valid_states switchka;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    inst.delta = inst.key10;
    
    switchka = valid_states::HIGH_Z;
    
    if (switchka==valid_states::HIGH_Z)
        cout << "switchka je ve stavu vysoke impedance\r\n";
    
    cout << inst.delta;
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
