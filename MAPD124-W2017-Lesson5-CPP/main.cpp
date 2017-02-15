//
//  main.cpp
//  MAPD124-W2017-Lesson5-CPP
//
//  Created by Tom Tsiliopoulos on 2017-02-14.
//  Copyright © 2017 Tom Tsiliopoulos. All rights reserved.
//

#include <iostream>
#include "Person.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Person people[3];
    
        
    people[0].name = "Tom";
    people[0].age = 25;
    
    people[0].SaysHello();
    
    return 0;
}
