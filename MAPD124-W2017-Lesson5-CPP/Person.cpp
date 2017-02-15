//
//  Person.cpp
//  MAPD124-W2017-Lesson5-CPP
//
//  Created by Tom Tsiliopoulos on 2017-02-14.
//  Copyright © 2017 Tom Tsiliopoulos. All rights reserved.
//

#include <stdio.h>
#include "Person.h"
#include <string>

using namespace std;

// constructor that takes name and age as parameters
Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

// empty constructor
Person::Person() {
    this->name = "unknown";
    this->age = 0;
}

// destructor
Person::~Person() {
    
}

void Person::SaysHello() {
    cout << "Hello " + this->name << endl;
}
