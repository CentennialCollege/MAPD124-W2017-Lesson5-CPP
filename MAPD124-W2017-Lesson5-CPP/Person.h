//
//  Person.h
//  MAPD124-W2017-Lesson5-CPP
//
//  Created by Tom Tsiliopoulos on 2017-02-14.
//  Copyright © 2017 Tom Tsiliopoulos. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include<string>
#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;
    // constructors
    Person(string name, int age);
    Person();
    // destructor
    ~Person();
    
    // public methods
    void SaysHello();
};

#endif /* Person_h */
