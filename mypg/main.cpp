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

int main(int argc, const char * argv[]) {
    // insert code here...
    
    inst.delta = inst.key10;
    
    cout << inst.delta;
    
    std::cout << "Hello, World!\n";
    return 0;
}
