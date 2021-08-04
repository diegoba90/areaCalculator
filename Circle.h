//
//  Circle.hpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/10/21.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
//inheret the shape class
#include "Shape.h"

//this header file will declare all members and functions used in Circle.cpp file
//Define Circle class
class Circle: public Shape {
    //private members
private:
    double radius;
    double r;
    //public members
public:
    Circle(double r); //constructor function
    void set_radius(double r); //sets initial radius value
    double get_radius(); //gets radius value from user
    double calc_area(); //inheret function from Shape class
};


#endif /* Circle_hpp */
